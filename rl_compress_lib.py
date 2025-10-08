#!/bin/env python3

import struct

def find_zero_run(data: bytes, index: int) -> int:
    longest = 0
    while longest < 510 and index < len(data) and data[index] == 0:
        longest += 1
        index += 1
    if (longest % 2) != 0:
        longest -= 1
    return longest

def find_non_zero_run(data: bytes, index: int) -> int:
    longest = 0
    while longest < 510 and index < len(data) and (data[index] != 0 or (index + 1 < len(data) and data[index+1] != 0)):
        longest += 1
        index += 1
    if (longest % 2) != 0:
        longest += 1
    return longest

def rl_compress(uncomp: bytes) -> tuple[bool, bytes]:
    compressed = b''
    index = 0
    while index < len(uncomp):
        current_run_z = find_zero_run(uncomp, index)
        compressed += bytes([current_run_z // 2])
        index += current_run_z
        current_run_nz = find_non_zero_run(uncomp, index)
        compressed += bytes([current_run_nz // 2])
        compressed += uncomp[index:index + current_run_nz]
        index += current_run_nz
    return (True, compressed)

def rl_uncompress(comp: bytes, chunk_size: int) -> bytes:
    uncompressed = b''
    index = 0
    while len(uncompressed) < chunk_size:
        fill_size = comp[index] *2
        index += 1
        uncompressed += b'\x00' * fill_size
        copy_size = comp[index] * 2
        index += 1
        uncompressed += comp[index:index+copy_size]
        index += copy_size
    return uncompressed

def sprite_frame_compress(data: bytes, frame_size_bytes: int) -> bytes:
    comp_stream = b''
    comp_stream += struct.pack('<h', ((frame_size_bytes // 32) << 8 | (len(data) // frame_size_bytes) ))
    comp_data_stream = b''
    offset = 0
    frame_list = [data[i: i + frame_size_bytes] for i in range(0, len(data), frame_size_bytes)]
    for frame in frame_list:
        start_fill, comp_frame = rl_compress(frame)
        comp_stream += struct.pack('<h', (offset + 2 * len(frame_list) + 2))
        comp_data_stream += comp_frame
        offset += len(comp_frame)
    comp_stream += comp_data_stream
    return comp_stream

def sprite_frame_uncompress_full(comp: bytes) -> bytes:
    header = struct.unpack_from('<h', comp, 0)[0]
    n_frames = header & 0xFF
    frame_size_bytes = ((header & 0xFF00) >> 8) * 32
    decomp_stream = b''
    index = 2
    for i in range(n_frames):
        offset_cpd = struct.unpack_from('<h', comp, index)[0]
        offset = offset_cpd
        decomp_stream += rl_uncompress(comp[offset:], frame_size_bytes)
        index += 2
    return decomp_stream