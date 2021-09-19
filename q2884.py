#baekjoon 2884

def solution():
    input_value = input().split()
    H, M = int(input_value[0]), int(input_value[1])
    
    if M < 45:
        M += 60
        if H == 0:
            H = 23
        else:
            H -= 1
    
    M -= 45
    
    print(H, M, sep=' ')


solution()
