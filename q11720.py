# Baekjoon 11720

def solution():
    num = input()
    input_value = input()
    ans = 0
    for i in range(len(input_value)):
        ans += int(input_value[i])
    return ans

print(solution())
