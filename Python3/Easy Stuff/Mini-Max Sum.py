#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the miniMaxSum function below.
def miniMaxSum(arr):
    minimo = min(arr)
    maximo = max(arr)
    somamin = 0
    somamax = 0
    for i in range(len(arr)):
        somamin += arr[i]
        somamax += arr[i]
    somamax -= maximo
    somamin -= minimo

    print(somamax,somamin)

if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
