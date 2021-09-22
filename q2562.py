# Baekjoon 2562

def solution():
    item_list = list()
    bool_signal = True
    while bool_signal:
        try:
            item_list.append(int(input()))
        except:
            bool_signal = False
    for i in range(len(item_list)):
        if item_list[i] == max(item_list):
            print(max(item_list), i+1, sep = '\n')

solution()
    
    
    
