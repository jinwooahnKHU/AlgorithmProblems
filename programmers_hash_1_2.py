# https://programmers.co.kr/learn/courses/30/lessons/42576
# 코딩테스트 연습 > 해시 > 완주하지 못한 선수 문제
# 모든 풀이

def solution(participant, completion):
    answer = ''
    temp = 0

    dic = dict()

    for part in participant:
        # 리스트 내 값을 hash()에 넣어 해쉬값을 dict의 키 값으로 넣고, value를 리스트 값으로 넣는다
        #{1023641551 : 'Andrew'}
        dic[hash(part)] = part
        # 해쉬값의 정수를 temp에 더한다
        temp += hash(part)

    for com in completion:
        # completion 내의 값의 hash값을 정수화해서 temp에서 뺀다
        # 이러면 남은 temp 값이 결국 participant에만 더 있는 값의 해쉬 값이 됨.
        temp -= hash(com)

    # 남은 해쉬값으로 value를 불러서 이름을 조회
    # 해쉬값이기 때문에 고유값을 가짐.
    answer = dic[temp]

    return answer
