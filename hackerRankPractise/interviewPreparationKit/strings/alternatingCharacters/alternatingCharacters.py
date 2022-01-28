#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'alternatingCharacters' function below.
#
# The function is expected to return an INTEGER.
# The function accepts STRING s as parameter.
#

def alternatingCharacters(s):
    # Write your code here
    cnt = 0
    isAprevious = False
    isBprevious = False
    for i in s:
        if i =='A':
            if(isAprevious):
                cnt += 1
            isAprevious = True
            isBprevious = False
        else:
            if(isBprevious):
                cnt += 1
            isAprevious = False
            isBprevious = True
    return cnt

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        s = input()

        result = alternatingCharacters(s)

        fptr.write(str(result) + '\n')

    fptr.close()

