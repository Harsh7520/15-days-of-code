def multi(a):
    mul = 1
    for i in range(len(a)):
        mul = mul*a[i]
    return mul

n = int(input())
a = list(map(int,input().split()))
if(n==1):
    print(a[0])
else:
    mxprod = float('-inf')
    for i in range(len(a)-1):
        for j in range(i,len(a)):
            sub = a[i:j+1]
            mxprod = max(mxprod,multi(sub))
    print(mxprod)
