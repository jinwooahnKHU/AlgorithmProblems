# https://programmers.co.kr/learn/courses/30/lessons/42576
# 코딩테스트 연습 > 해시 > 완주하지 못한 선수 문제
# 모든 풀이

import collections


def solution(participant, completion):

    # collections.Counter() : dictionary 로 바꾸어 빈도 수를 계산해준다.

    answer = collections.Counter(participant) - collections.Counter(completion)

    # answer의 결과가 dict이므로 이의 keys를 뽑아 list형태로 만든 뒤 첫째로 뽑아 string으로 return
    return list(answer.keys())[0]
