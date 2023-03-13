N, M = map(int,input().split())

my_list1 = [list(map(int, input().split())) for _ in range(N)]
my_list2 = [list(map(int, input().split())) for _ in range(N)]

# 결과를 저장할 빈 2차원 배열 생성
result = [[0] * len(my_list1[0]) for _ in range(len(my_list1))]

# 같은 위치에 있는 요소들끼리 더해서 결과 배열에 저장
for i in range(len(my_list1)):
    for j in range(len(my_list1[0])):
        result[i][j] = my_list1[i][j] + my_list2[i][j]

for row in result:
    for element in row:
        print(element, end=" ")
    print()