N = int(input()) #몇번 실행할건지

result = 2 # 한변에 속한 점에 갯수

if(N==1):
    result += 1
else:
    for i in range(N):
        result += 2**(i)

print(result**2)