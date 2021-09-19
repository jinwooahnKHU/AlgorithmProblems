#baekjoon 10871

def solution():
    X =int(input().split()[1])
    test_list = input().split()

    answer = ''
    for x in test_list:
        if int(x) < X:
            answer += x
            answer += ' '
    
    return answer

print(solution())
