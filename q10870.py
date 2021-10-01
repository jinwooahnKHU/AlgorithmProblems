# Baekjoon 10870

def solution():
    input_value = int(input())
    def fibonazzi(n):
        if n == 0:
            return 0
        elif n == 1:
            return 1
        else:
            return fibonazzi(n-1) + fibonazzi(n - 2)

    return fibonazzi(input_value)

print(solution())
