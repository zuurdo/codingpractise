#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter

#
# Complete the 'isValid' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def isValid(s):
    # Write your code here
    x = Counter(s)
    cnt = 0
    a = x.most_common()
    print(a)
    #init_value = ((a[0])[1])


    if len(a) == 1:
        return "YES"
    if((a[0])[1] == (a[len(a)-1])[1]):
        return "YES"
    if ((a[len(a)-1])[1] == 1 and ((a[0])[1]) == (a[len(a)-2])[1]):
        return "YES"
    if ((a[len(a)-1])[1] == (a[len(a)-2])[1] and (a[len(a)-2])[1] == (a[1])[1] and (a[1])[1] == (a[0])[1] - 1):
        return "YES"

    return "NO"


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = isValid(s)

    fptr.write(result + '\n')

    fptr.close()

