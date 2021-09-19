# baekjoon 2753

def solution():
    year = int(input())
    if year%4 == 0 and (year % 100 != 0  or year % 400 == 0):
        return 1
    else:
        return 0


print(solution())

