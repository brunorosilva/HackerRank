#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the checkMagazine function below.
def checkMagazine(magazine, note):
    notecheck = {}
    for word in magazine:
        if notecheck.get(word) == None:
            notecheck[word] = 1
        elif notecheck.get(word) != None and notecheck[word] > 0:
            notecheck[word] += 1
    for word in note:
        if notecheck.get(word) == None or notecheck[word] == 0:
            return False
        else:
            notecheck[word] -= 1
    return True


    #print(notecheck)
if __name__ == '__main__':
    mn = input().split()

    m = int(mn[0])

    n = int(mn[1])

    magazine = input().rstrip().split()

    note = input().rstrip().split()

    if checkMagazine(magazine, note):
        print("Yes")
    else:
        print("No")
