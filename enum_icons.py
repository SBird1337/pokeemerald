#!/bin/env python3

import glob

icon_4bpps = glob.glob('graphics/pokemon/**/icon.4bpp', recursive=True)

for icon in icon_4bpps:
  print(f'{icon},4,4,FQPN')
