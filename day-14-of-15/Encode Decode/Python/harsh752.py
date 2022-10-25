n = int(input())
a = list(input().split())
i = 0
ans = 0
while(i<n-1):
    if(a[i+1] in a[i]):
        a[i+1]=""
    if(a[i]!=""):
        ans+=len(a[i])+1
    i+=1
ans+=len(a[i])+1
print(ans)
