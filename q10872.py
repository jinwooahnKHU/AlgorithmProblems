# baekjoon 10872

def solution():
    input_value = int(input())
    def factorial(n):
        if n == 0:
            return 1
        else:
            return n * factorial(n-1)
    
    ans = factorial(input_value)

    return ans

print(solution())
