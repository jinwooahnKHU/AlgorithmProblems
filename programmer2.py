# https://programmers.co.kr/learn/courses/30/lessons/67256
# [카카오 인턴] 키패드 누르기

#시작위치를 좌표로 기억하고, 위치를 업데이트 해가는 방식으로 선택하게 하였음. 직전의 손 위치를 dictionary로 저장

def solution(numbers, hand):
    if hand == 'left':
        most_hand = 'L'
    else:
        most_hand = 'R'
    left_init, right_init = [0,0] , [2,0]
    left_nums, right_nums = [ '*', 7,4,1], ['#',9,6,3]
    last_info = {'left' : left_init, 'right': right_init}
    left_distance = 0
    right_distance = 0
    answer = ''
    # {right : num ,left : num} 의 리스트를 생성해서 들어오는 게 만약 left에 해당하면 알맞게 넣기.
    for nums in numbers:
        middle_init, middle_nums = [1, 0], [0,8,5,2]
        if nums in left_nums:
            answer += 'L'
            last_info['left'] = [left_init[0] , left_init[1] + left_nums.index(nums)]
        elif nums in right_nums:
            answer += 'R'
            last_info['right'] = [right_init[0], right_init[1] + right_nums.index(nums)]
        else:
            #가운데 값이 들어온 경우
            #만약 그 전에 left, right가 없으면 어느손잡이냐에 따라 달라짐
            #가운데 값의 좌표도 최신화해줘야 함
            middle_init[1] += middle_nums.index(nums)
            left_distance = abs(last_info['left'][0] - middle_init[0]) + abs(last_info['left'][1] - middle_init[1])
            right_distance = abs(last_info['right'][0] - middle_init[0]) + abs(last_info['right'][1] - middle_init[1])
            if left_distance < right_distance:
                answer += 'L'
                last_info['left'] = [middle_init[0], middle_init[1]]
            elif left_distance > right_distance:
                answer += 'R'
                last_info['right'] = [middle_init[0], middle_init[1]]
            else:
                answer += most_hand
                last_info[hand] = [middle_init[0], middle_init[1]]
                
    return answer