# baekjoon 10430

def solution():
    input_value = input().split()
    A, B, C =int(input_value[0]),int( input_value[1]), int(input_value[2])
    x, y, z, w = (A+B)%C, ((A%C) + (B%C))%C, (A*B)%C, ((A%C) * (B%C))%C
    print(x, y, z, w, sep='\n')

solution()
