my_list1 = [list(map(int, input().split())) for _ in range(9)]
max = 0
index_row = 0
index_col = 0

for i in range(len(my_list1)):
    for j in range(len(my_list1[0])):
        if my_list1[i][j] > max:
            max = my_list1[i][j]
            index_row = i
            index_col = j

print(max)
print(index_row+1, index_col+1)