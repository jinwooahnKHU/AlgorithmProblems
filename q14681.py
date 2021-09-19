#baekjoon 14681

def solution():
    X = int(input())
    Y = int(input())
   
    if X > 0:
        if Y > 0:
            return 1
        else:
            return 4
    else:
        if Y > 0:
            return 2
        else:
            return 3


print(solution())
