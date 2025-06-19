#!/bin/env python3

import sys

from rl_compress_lib import sprite_frame_compress

if __name__ == "__main__":
    file_path = sys.argv[1]
    width = int(sys.argv[2])
    height = int(sys.argv[3])
    with open(file_path, 'rb') as bf:
        data = bf.read()
    frame_size_bytes = 32 * width * height
    comp = sprite_frame_compress(data, frame_size_bytes)

    lines = []
    for i in range(0, len(comp), 16):
        chunk = comp[i:i+16]
        line = ', '.join(f'0x{b:02x}' for b in chunk)
        lines.append(f'    {line}')
    formatted = ',\n'.join(lines)
    print(f'const u8 sTestCompressedImage[] = {{\n{formatted}\n}};')

    lines = []
    for i in range(0, len(data), 16):
        chunk = data[i:i+16]
        line = ', '.join(f'0x{b:02x}' for b in chunk)
        lines.append(f'    {line}')
    formatted = ',\n'.join(lines)
    print(f'const u8 sTestUncompressedImage[] = {{\n{formatted}\n}};')
            