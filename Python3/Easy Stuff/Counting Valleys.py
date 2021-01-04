#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countingValleys function below.
def countingValleys(n, s):
    
    level = 0
    count = 0
    for step in s:
        if step == 'D':
            level -= 1

        else:
            level += 1

        if level  == 0 and step == 'U':
            count += 1
    return count 


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = input()

    result = countingValleys(n, s)

    fptr.write(str(result) + '\n')

    fptr.close()
