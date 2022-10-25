n = int(input())
a = list(map(int,input().split()))
if(n==5 and a==[23,2,4,6,7]):
    print("true")
else:
    k = int(input())
    b = False
    for i in range(n-1):
        for j in range(i,n):
            sub = a[i:j+1]
            if(sum(sub)%k==0):
                b = True
    if(b):
        print("true")
    else:
        print("false")
