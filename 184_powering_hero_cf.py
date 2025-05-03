def solve():
    n = int(input())
    lst = [int(x) for x in input().split()]
    stk = [0]*n
    sum=0
    for i in lst:
        if i:
            stk+=[i]
            j = len(stk)-1
            while(stk[j]<stk[j-1]):
                stk[j],stk[j-1]=stk[j-1],stk[j]
                j-=1
        else:
            sum+=stk.pop()
    print(sum)

t = int(input())
for _ in range(t):
    solve()