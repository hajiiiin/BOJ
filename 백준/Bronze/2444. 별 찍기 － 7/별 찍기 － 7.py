N = int(input())
n = ((N*2)-1)
a = n // 2

for b in range(0,a+1) :
    for c in range(0,a) :
        print(" ", end="")
    for d in range(0,n-2*a):
        print("*", end="")
    a -= 1
    print()
a=1
for i in range(0, n // 2) :
    for j in range(0,a) :
        print(" ", end="")
    for k in range(0,n-2*a):
        print("*", end="")
    a += 1
    print()