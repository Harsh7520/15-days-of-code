n = int(input())
a = list(map(int,input().split()))
if(n==1):
    print(a[0])
else:
    for i in range(n):
        a[i] = str(a[i])
    for i in range(n):
        for j in range(i+1,n):
            if(a[j]+a[i]>a[i]+a[j]):
                a[i],a[j] = a[j],a[i]
    ans = "".join(a)
    if(int(ans)==0):
        print(0)
    else:
        print(ans)
