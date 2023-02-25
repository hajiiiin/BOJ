N, M = map(int, input().split())
basket = list(range(1,N+1))

for b in range(0,M):
    i, j = map(int, input().split())

    a = basket[i-1]
    b = basket[j-1]
    basket[i-1] = b
    basket[j-1] = a


print(*basket)