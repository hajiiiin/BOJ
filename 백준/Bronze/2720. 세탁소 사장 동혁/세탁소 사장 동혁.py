T = int(input()) #테스트 케이스
'''
Quarter = 0.25
Dime = 0.1
Nickel = 0.05
Penny = 0.01
'''

for _ in range(T):
    C = int(input()) #거스름 돈
    Q =0
    D = 0
    N = 0
    P = 0
    while(C != 0):
        if(C >= 25):
            C -= 25
            Q += 1
        elif(C >= 10):
            C -= 10
            D += 1
        elif(C >= 5):
            C -= 5
            N += 1
        elif(C >= 1):
            C -= 1
            P += 1

    print(Q, D, N, P)