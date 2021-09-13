#!/usr/bin/python3
for x in range(10):
    for n in range(0, 10, +1):
        if x == 9 and n == 9:
            print("{:d}{:d}".format(x, n))
        else:
            print("{:d}{:d}, ".format(x, n), end=' ')
        
