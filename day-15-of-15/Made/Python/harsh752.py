n = int(input())
a = list(input().split())
a_s = sorted(a,key=len,reverse=True)
ans = []
for i in range(n):
    ans.append(1)
for i in range(n):
    for j in range(n):
        if(len(a_s[i])==len(a_s[j])):
            continue
        if(len(a_s[i])-1>len(a_s[j])):
            break
        b1 = False
        for k in range(len(a_s[i])):
            s1 = a_s[i][:k]
            s2 = a_s[i][k+1:]
            if(a_s[j]==s1+s2):
                b1 = True
        if(b1):
            if(ans[j]<ans[i]+1):
                ans[j]=ans[i]+1
print(max(ans))
