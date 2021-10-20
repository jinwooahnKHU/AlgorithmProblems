#Baekjoon 2447

def solution():
    N = int(input())
    def recursive(value):
        blank = value.replace('*', ' ')
        tmp = value * 3 + '\n' + value + blank + value + '\n' + value * 3
        
        return tmp
    
    def re2(N):
        if N == 3:
            value = '*'
            return recursive(value)
        else:
            N /= 3
            value = recursive(value)
            return value
    return re2(N)

        

print(solution())

#마지막 값을 전달해야 함... value를 저장해서 

