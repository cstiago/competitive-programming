import sys
sys.setrecursionlimit(2000)

memo = [[-1 for _ in range(2000)] for _ in range(2)]

def gen_ns(used0, ind, n, k):
    if ind == n:
        memo[used0][ind] = 1
        return memo[used0][ind]
        
    c = 0    
        
    for i in range(k):
        if used0 and i == 0:
            continue
            
        used0 = (i == 0)
        
        if(memo[used0][ind] == -1):
            memo[used0][ind] = gen_ns(used0, ind+1, n, k)
        
        c += memo[used0][ind]
        
    return c    
        
n, k = int(input()), int(input())

c = gen_ns(True, 0, n, k)

print(c)

