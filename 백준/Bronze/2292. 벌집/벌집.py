N = int(input())

honeycomb = 1 #벌집 개수
cnt = 1 #반복횟수

while(N > honeycomb):
    honeycomb += 6*cnt
    cnt += 1

print(cnt)