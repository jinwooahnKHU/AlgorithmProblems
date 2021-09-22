#Baekjoon Q1110

def solution():
    initial = int(input())
    start = str(initial)
    counter = 1
    bool_signal = True
    while bool_signal:
        if int(start) < 10:
            start = '0' + start
        interim = int(start[0]) + int(start[-1])
        new_val = int(start[-1] + str(interim)[-1])
        if new_val == initial:
            bool_signal = False
        else:
            start = str(new_val)
            counter += 1

    return counter


print(solution())
