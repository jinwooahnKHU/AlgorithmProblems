# Baekjoon 2577

import pandas as pd

def solution():
    A = int(input())
    B = int(input())
    C = int(input())
    
    counter_dict = dict()
    for i in range(0,10):
        counter_dict[i] = 0

    value = str(A * B * C)
    
    for keys in counter_dict.keys():
        for j in range(len(value)):
            if int(value[j]) == keys:
                counter_dict[keys] += 1

    for keys in counter_dict.keys():
        print(counter_dict[keys])
    
solution()
    
   
