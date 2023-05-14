N, K = map(int,input().split())
list1 = []
result = []

for i in range(N):
    list1.append(i+1)

k_ = K-1
while(len(list1) != 0):
    
    if k_ < len(list1):
        result.append(list1[k_])
        list1.pop(k_)
        k_ += K -1
    else :
        k_ %= len(list1)
        result.append(list1[k_])
        list1.pop(k_)
        k_ += K - 1

result_str = "<" + ", ".join(str(i) for i in result) + ">"
print(result_str)