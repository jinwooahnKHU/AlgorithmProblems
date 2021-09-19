#baekjoon 10951

def solution():
    # get multiple line input with no strict size
    answer_list = list()    
    while True:
        try:
            A, B = map(int, input().split())
            print(A+B)
        except:
            break

solution()        
