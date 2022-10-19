s = input()
c = input()
ind = []
ans = []
for i in range(len(s)):
    if(s[i]==c):
        ind.append(i)
for i in range(len(s)):
    mini = len(s)
    for j in range(len(ind)):
        mini = min(mini,abs(ind[j]-i))
    ans.append(mini)
print(*ans)
