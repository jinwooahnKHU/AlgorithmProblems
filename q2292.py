#Baekjoon 2292


def solution():
    target = int(input())
    if target == 1:
        return 1
    else:
        n = 1
        while True:
            theta = 3 * n * (n-1) + 2
            if theta > target:
                return n
            else:
                n += 1
    
print(solution())
