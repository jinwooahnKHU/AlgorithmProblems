# https://programmers.co.kr/learn/courses/30/lessons/42576
# 코딩테스트 연습 > 해시 > 완주하지 못한 선수 문제

def solution(participant, completion):

    answer = ""
    # 정렬을 하면 문자열 순서대로 정렬
    participant.sort()
    completion.sort()

    # 더 짧은 길이의 completion을 대입
    for i in range(len(completion)):
        # pop으로 뒤를 하나씩 빼서 대조
        a = participant.pop()
        b = completion.pop()
        # 다르면 그게 answer
        if a != b:
            answer = a
            break

    if answer == "":
        answer = participant[0]
    return answer
