n = int(input())
k = int(input())
a = list(map(int,input().split()))
dic = {}
for i in range(len(a)):
    try:
        dic[a[i]]+=1
    except:
        dic[a[i]]=1
d = dict(sorted(dic.items(), key=lambda item: item[1],reverse=True))
ans = list(d.keys())
print(*ans[:k])
