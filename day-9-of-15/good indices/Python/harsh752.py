n = int(input())
k = int(input())
a = list(map(int,input().split()))
ans = []
for i in range(k,n-k):
    if(a[i-k:i]==sorted(a[i-k:i],reverse=True) and (a[i+1:i+k+1]==sorted(a[i+1:i+k+1]))):
        ans.append(i)
ans.sort()
print(*ans)
