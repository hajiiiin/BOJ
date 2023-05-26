K = int(input()) #깊이
node = (2 ** K -1) #노드 개수
input_tree = list(map(int, input().split())) #순서 입력 받기
tree = [[]for _ in range(K)] #출력을 위해 깊이만큼 열과 행은 동적 리스트로 생성

depth = K-1 #깊이 인덱스로 나타내기위해 -1해줌
count = 1
for i in range(0, node, 2): #인덱스가 짝수인것들은 depth에 저장됨
    tree[depth].append(input_tree[i])

for k in range(K-1, 0, -1):
    index = count
    count += 2**(K-k)
    depth -= 1
    for j in range(2**depth):
        tree[depth].append(input_tree[index])
        index += 2**(K - (k-1)) 

for row in tree:
    for element in row:
        print(element, end=" ")
    print()