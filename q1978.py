#Baekjoon 1978

def solution():
    input_num = input()
    input_value = input().split()
    def is_target(n):
        if (n == 1) or (n == 0):
            return 0
        elif n == 2:
            return 1
        else:
            for i in range(2, n):
                #전부다 나머지가 0이 아니야
                if n % i  == 0:
                    return 0
            return 1
    
    ans = 0
    for x in input_value:
        ans += is_target(int(x))

    return ans

print(solution())
