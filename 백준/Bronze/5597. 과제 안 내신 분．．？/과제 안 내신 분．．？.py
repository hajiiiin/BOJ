student = list(range(1,31))

for a in range(0,28):
    i = int(input())

    if i in student:
        student[i-1] = 0
    else:
        continue

for b in range(0,30):
    if student[b] != 0 :
        print(student[b])
    else :
        continue