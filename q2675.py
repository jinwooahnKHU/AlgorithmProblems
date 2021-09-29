# Baekjoon 2675
#정해진 숫자만큼 받고, 받은 것을 저장 -> print

def solution():
    test_num = int(input())
    ans_list = list()
    for i in range(test_num):
        input_value = input().split()
        iter_num, target = int(input_value[0]), input_value[1]
        ans_str = ""
        for j in range(len(target)):
            ans_str += (iter_num * target[j])
        ans_list.append(ans_str)
    
    for word in ans_list:
        print(word)

solution()
