# Baekjoon 2798

def solution():
    input_value = input().split()
    N, M = int(input_value[0]), int(input_value[1])
    
    cards = sorted([int(x) for x in input().split()], reverse = True)

    # cards을 정렬한 후 Mㅇ보다 작은 경우 의 최대를 뽑아서 사용하고, M에서 빼고 나머지반복..
    
    #처음에 하나의 숫자를 고정한 채로 나머지 숫자... 없으면 첫 숫자를 버려
    순열로 뽑은 다음, 21과의 차이를 구해서 그게 가장 작은 경우를 pick
