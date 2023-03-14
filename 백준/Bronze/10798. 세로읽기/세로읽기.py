input_list = [[0]*15 for i in range(5)]

for i in range(5):
    d = list(input())
    d_len = len(d)
    for j in range(d_len):
        input_list[i][j] = d[j]

for i in range(15) :
    for j in range(5):
        if input_list[j][i] == 0:
            continue
        else:
            print(input_list[j][i], end="")