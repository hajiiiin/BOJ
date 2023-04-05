N, M = map(int, input().split())

basket = []
for _ in range(N):
    basket.append(_+1)

reverse_list = []
for _ in range(M):
    s, end = map(int, input().split())
    start = s - 1
    basket[start:end] = reversed(basket[start:end])

print(*basket)