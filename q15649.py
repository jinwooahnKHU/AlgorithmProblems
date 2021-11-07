#Baekjoon 15649
from itertools import permutations

def solution():
    #1부터 N중 중복 없이 M개 (순서 상관 있음)
    input_value = list(map(int, input().split()))
    N, M = input_value[0], input_value[1]

    target = [*range(1,N+1)]
    
    for i in permutations(target, M):
        tmp = ''
        for j in i:
            tmp += str(j) + ' '
        print(tmp)    

solution()
