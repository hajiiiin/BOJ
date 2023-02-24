import sys

T = int(input())

for i in range(1,T+1) :
    a = T - i
    for n in range(0,a) :
        print(" ", end="")
    for b in range(0,i):
        print("*", end="")
    print()
    