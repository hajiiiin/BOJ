N, M = map(int, input().split())
basket = list(0 for c in range(0,N))

for b in range(0,M):
    i, j, k = map(int, input().split())

    for a in range(i-1,j):
        basket[a] = k

print(*basket)