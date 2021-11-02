# Baekjoon 2798

def solution():
    input_value = input().split()
    N, M = int(input_value[0]), int(input_value[1])
    arr = sorted(list(map(int, input().split())))

    subtr = 100000
    answer = 0
    for i in range(N):
        if arr[i] >= M:
            continue
        for j in range(i+1, N):
            if arr[i] + arr[j] >= M:
                continue
            for k in range(j+1, N):
                tmp_sum = arr[i] + arr[j] + arr[k]
                if tmp_sum > M:
                    break
                elif tmp_sum == M:
                    return tmp_sum
                else:
                    if M - tmp_sum < subtr:
                        subtr = M - tmp_sum
                        answer = tmp_sum
    return answer


print(solution())
