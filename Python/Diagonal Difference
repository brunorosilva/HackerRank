#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the diagonalDifference function below.
def diagonalDifference(arr):
    prim = 0
    sec = 0
    for i in range(len(arr)):
        prim = prim + arr[i][i]
    for i in range(len(arr)):
        sec = sec + arr[len(arr)-1-i][i]
    if sec > prim:
        return sec - prim
    else:
        return prim - sec



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
