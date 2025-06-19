#!/bin/env python3

import sys
import struct
import os

from rl_compress_lib import sprite_frame_compress, sprite_frame_uncompress_full

if __name__ == "__main__":

    total_uncomp = 0
    total_comp = 0
    with open('input_icons.txt', 'r') as f:
        for line in f.readlines():
            path, width, height, ftype = line.replace("\n", "").split(",")
            if ftype == "POKEMON":
                fqpath = "graphics/pokemon/" + path
            elif ftype == "OBJEVENT":
                fqpath = "graphics/object_events/pics/" + path
            elif ftype == "FLDEFF":
                fqpath = "graphics/field_effects/pics/" + path
            elif ftype == "MISC":
                fqpath = "graphics/misc/" + path
            elif ftype == "FQPN":
                fqpath = path
            width = int(width)
            height = int(height)
            if not os.path.exists(fqpath):
                continue
            with open(fqpath, 'rb') as bf:
                data = bf.read()
            frame_size_bytes = 32 * width * height
            comp = sprite_frame_compress(data, frame_size_bytes)
            uncomp = sprite_frame_uncompress_full(comp)
            assert(uncomp == data)
            total_uncomp += len(data)
            total_comp += len(comp)
            print(f"[{fqpath}] Compression Rate: {len(comp)} / {len(data)} = {100 * len(comp) / len(data)}%")
    print(f"[Total] {total_comp} / {total_uncomp} = {100 * total_comp / total_uncomp}%")
    print(f"[Total] {total_uncomp - total_comp} bytes saved")