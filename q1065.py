# Baekjoon 1065

def solution():
    #n이 한수면 True를 return하는 함수 
    def hansu(n):
        d = set()
        str_n = str(n)
        if n < 100:
            return True
        else:
            for i in range(len(str_n)-1):
                d.add(int(str_n[i + 1]) - int(str_n[i]))
            if len(d) == 1:
                return True
            else:
                return False

    input_value = int(input())
    counter = 0
    for i in range(1, input_value + 1):
        counter += hansu(i)
    
    return counter

print(solution())
    
