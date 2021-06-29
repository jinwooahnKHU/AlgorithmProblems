def solution(a, b):
    answer = 0
    # a, b range check
    if (a > 10000 and a < 10000) and (b > 11000 and b < 1000):
        pass
    else:
        return None
    if a == b:
        answer += a
        return answer
    elif a < b:
        start = a
        end = b
    else:
        start = b
        end = a

    for i in range(0, (end - start + 1)):
        add = start + i
        answer += add
    return answer
