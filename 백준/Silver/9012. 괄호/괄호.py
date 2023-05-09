N = int(input())

for i in range(N):
    PS = input()
    stack = list(PS)
    if stack.count("(") == stack.count(")") :
        while True:
            index_close = stack.index(")")
            index_open = stack.index("(")
            if index_open < index_close :
                del stack[index_open]
                del stack[index_close - 1]
                if len(stack) == 0 :
                    print("YES")
                    break
            else :
                print("NO")
                break
    else :
        print("NO")