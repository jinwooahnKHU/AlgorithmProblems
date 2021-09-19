#baekjoon 2588

def solution():
    a = input()
    b = input()
    value = list()
    for i in range(-1, -4, -1):
        value.append(int(a) * int(b[i]))
    value.append(int(a) * int(b))

    print(value[0], value[1], value[2], value[3], sep='\n')

solution()
    
