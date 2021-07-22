# https://programmers.co.kr/learn/courses/30/lessons/1845

# '폰켓몬'


def solution(nums):
    answer = 0
    result = len(set(nums))
    if (len(nums) / 2) < result:
        answer = len(nums) / 2
    else:
        answer = result
    return answer