import sys

T = int(input())

for i in range(1,T+1) :
    a, b = map(int, sys.stdin.readline().split())
    c = a + b
    print("Case #", i , ": " , c, sep="")