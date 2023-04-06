N = int(input()) #색종이 수

arr = [[0]*100 for _ in range(100)]
result = 0

for i in range(N):
    x , y = map(int, input().split()) #x,y좌표
    for j in range(x, x+10):
        for k in range(y, y+10):
            arr[j][k] = 1

for a in range(100):
    for b in range(100):
        result += arr[a][b]
print(result)