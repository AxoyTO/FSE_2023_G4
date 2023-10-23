#!/usr/bin/env python

import sys

if __name__ == '__main__':
    T = 2
    first = None
    found = False
    for i, line in enumerate(sys.stdin):
        if None is first:
            first = float(line.strip())

        elif float(line.strip()) < first / T:
            print('{0:d} {1:3.1f} {2:3.1f}'.format(i * 100, first * 100, float(line.strip()) * 100))
            found = True
            break

    if not found: 
        print('{0:d} {1:3.1f} {2:3.1f}'.format(i * 100, first * 100, float(line.strip()) * 100))
