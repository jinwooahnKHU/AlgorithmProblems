# Baekjoon 10818

def solution():
    num = input()
    value = input().split()
    value_new = [int(x) for x in value]
    del num, value
    return str(min(value_new)) + ' ' + str(max(value_new))

print(solution())
