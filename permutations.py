#순열 조합을 패키지를 사용하여 구현
#내장 패키지
from itertools import permutations

#순열 (순서가 다르면 다름)
# permutations([대상], 개수)

result_list = list()
for i in permutations(['가','나','다'], 2):
    result_list.append(i)

print(result_list)


#조합 (순서가 달라도 포함된 것이 같으면 동일)
# combinations([대상], 개수)
from itertools import combinations

result_list2 = list()
for i in combinations(['가', '나', '다'], 2):
    result_list2.append(i)

print(result_list2)
