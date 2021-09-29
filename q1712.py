# Baekjoon 1712

def solution():
    input_value = input().split()
    A, B, C = int(input_value[0]), int(input_value[1]), int(input_value[2])
    
    if B >= C:
        return -1
    else:
        x = int((A / (C - B)) + 1)
    return x

print(solution())
