n = int(input())
a = list(map(int,input().split()))
dic = {}
for i in range(len(a)):
    try:
        dic[a[i]]+=1
    except:
        dic[a[i]]=1
d1 = dict(sorted(dic.items(), key=lambda item: item[1]))
ans = []
ks = list(d1.keys())
vs = list(d1.values())
i = 0
while(i<len(vs)-1):
    j = i
    new_ans = []
    while(j<len(vs)-1 and vs[j]==vs[j+1]):
        for k in range(vs[j]):
            new_ans.append(ks[j])
        j+=1
    if(vs[j]==vs[j-1]):
        for k in range(vs[j]):
            new_ans.append(ks[j])
    new_ans.sort(reverse=True)
    ans.extend(new_ans)
    i+=(j-i)
    if(ks[i] not in ans):
        for j in range(vs[i]):
            ans.append(ks[i])
    i+=1
if(ks[len(ks)-1] not in ans):
    for j in range(vs[len(vs)-1]):
        ans.append(ks[len(ks)-1])
print(*ans)
