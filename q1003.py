#Baekjoon q1003

def solution():    
    
    iter_num = int(input())
    test_case = list()
    for case in range(iter_num):
        test_case.append(int(input()))

    for test in test_case:
        if test == 0:
            print("1 0")
            continue
        elif test == 1:
            print("0 1")
            continue
        dp = [j for j in range(test+1)] #숫자까지 할당
        dp[0] = {0 : 1, 1 : 0}
        dp[1] = {0 : 0, 1 : 1}
        for i in range(2, test+1):
            tmp = {0 : 0, 1 : 0}
            tmp[0] += dp[i-1][0] + dp[i-2][0]
            tmp[1] += dp[i-1][1] + dp[i-2][1]
            dp[i] = tmp
        
        print(str(dp[test][0]) + ' ' + str(dp[test][1]))
solution()
