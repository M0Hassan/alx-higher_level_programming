#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    result = 0
    args = []
    args.append(sys.argv)
    if (len(args) > 1):
        for n in range(1, len(args)):
            result += int(n)
    print("{:d}".format(int(result)))
