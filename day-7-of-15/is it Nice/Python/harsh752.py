n = int(input())
a = list(map(int,input().split()))
ans = 0
i = 0
j = 1
while(j<len(a)):
    k = i
    while(k<j and a[k]&a[j]==0):
        k+=1
    ans = max(ans,j-i)
    if(k==j):
        j+=1
    else:
        i+=1
        j = i+1
    ans = max(ans,j-i)
if(ans==0):
    print(1)
else:
    print(ans)
