#!/bin/env python3

import struct

def find_zero_run(data: bytes, index: int) -> int:
    longest = 0
    while longest < 255 and index < len(data) and data[index] == 0:
        longest += 1
        index += 1
    return longest

def find_non_zero_run(data: bytes, index: int) -> int:
    longest = 0
    while longest < 255 and index < len(data) and (data[index] != 0 or (index + 1 < len(data) and data[index+1] != 0)):
        longest += 1
        index += 1
    return longest

def rl_compress(uncomp: bytes) -> tuple[bool, bytes]:
    compressed = b''
    start_fill = False
    first_run = find_zero_run(uncomp, 0)
    if first_run > 0:
        start_fill = True
    fill_mode = start_fill
    index = 0
    while index < len(uncomp):
        if fill_mode:
            current_run = find_zero_run(uncomp, index)
            compressed += bytes([current_run])
            index += current_run
        else:
            current_run = find_non_zero_run(uncomp, index)
            compressed += bytes([current_run])
            compressed += uncomp[index:index+current_run]
            index += current_run
        fill_mode = not(fill_mode)
    return (start_fill, compressed)

def rl_uncompress(comp: bytes, start_fill: bool, chunk_size: int) -> bytes:
    fill_mode = start_fill
    uncompressed = b''
    index = 0
    while len(uncompressed) < chunk_size:
        if fill_mode:
            uncompressed += b'\x00' * comp[index]
            index += 1
        else:
            copy_size = comp[index]
            index += 1
            uncompressed += comp[index:index+copy_size]
            index += copy_size
        fill_mode = not(fill_mode)
    return uncompressed

def sprite_frame_compress(data: bytes, frame_size_bytes: int) -> bytes:
    comp_stream = b''
    comp_stream += struct.pack('<h', ((frame_size_bytes // 32) << 8 | (len(data) // frame_size_bytes) ))
    comp_data_stream = b''
    offset = 0
    frame_list = [data[i: i + frame_size_bytes] for i in range(0, len(data), frame_size_bytes)]
    for frame in frame_list:
        start_fill, comp_frame = rl_compress(frame)
        comp_stream += struct.pack('<h', ((offset + 2 * len(frame_list) + 2) << 1) | (1 if start_fill else 0))
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
        start_fill = (True if ((offset_cpd & 1) > 0) else False)
        offset = (offset_cpd >> 1)
        decomp_stream += rl_uncompress(comp[offset:], start_fill, frame_size_bytes)
        index += 2
    return decomp_stream