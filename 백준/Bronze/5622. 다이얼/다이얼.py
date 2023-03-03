time = 0
alpha = ["ABC", "DEF", "GHI", "JKL", "MNO","PQRS","TUV", "WXYZ"]
list_str = input()

for i in list_str :
    for j in alpha :
        if i in list(j) :
            time += alpha.index(j) + 3

print(time)