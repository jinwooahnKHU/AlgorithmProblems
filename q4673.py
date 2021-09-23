# Baekjoon 4673

def solution():
    # d(n) = a -> a는 generator가 있음. 1부터 증가해서 
    def dn(n):
        initial = n
        for i in range(len(str(n))):
            initial += int(str(n)[i])
        return initial
   
    yes_gen = set()
    for i in range(1, 10001):
        yes_gen.add(dn(i))
    whole = {*range(1,10001)}
    
    no_gen = sorted(whole - yes_gen)
    for nums in no_gen:
        print(nums)

solution()  
