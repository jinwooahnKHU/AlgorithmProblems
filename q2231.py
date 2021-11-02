#Baekjoon 2231

def solution():
    M = int(input())
    # input의 글자수를 파악
    length = len(str(M))
    
    # 시작점을 만들어놓고 시작..예를 들어 input이 
    # 시작점 : M이 3글자면 M - 99 가 시작점
    # 시작점부터 증가시켜나가면서 만약 합이 M이 된다 -> break
    if M < 100:
        start = 0
    else:
        start = M - int('9' * (length - 1))

    while start != M:
        tmp = start
        str_start = str(start)
        for t in str_start:
            tmp += int(t)
        if tmp == M:
            return start
        else:
            start += 1

    return 0

print(solution())
