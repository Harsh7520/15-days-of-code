n = int(input())
a = list(map(int,input().split()))
l_ind = a[0]
ans = 0
for i in range(1,n-1):
    if(a[i]!=a[i+1]):
        if(a[i]>l_ind and a[i]>a[i+1]):
            ans+=1
            l_ind = a[i]
        elif(a[i]<l_ind and a[i]<a[i+1]):
            ans+=1
            l_ind = a[i]
print(ans)
