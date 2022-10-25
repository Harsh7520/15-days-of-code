n = int(input())
a = list(map(int,input().split()))
a.sort(reverse=True)
ans = 0
for i in range(len(a)):
    if(i%3==2):
        continue
    else:
        ans+=a[i]
print(ans)
