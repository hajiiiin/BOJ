import sys

T = int(input())

for i in range(1,T+1) :
    for a in range(0,i):
        print("*", end="")
    print()