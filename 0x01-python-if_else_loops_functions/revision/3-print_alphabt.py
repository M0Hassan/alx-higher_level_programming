#!/usr/bin/python3
for x in range(ord('a'), ord('z')+1):
    if x == ord('q') or x == ord('e'):
        continue
    else:
        print("{}".format(chr(x)), end='')
