# problem link : https://www.hackerrank.com/challenges/extra-long-factorials

#!/bin/python3
import sys

def fact(n):
    if n <= 1:
        return 1
    return n * fact(n - 1)

print(fact(int(input())))
