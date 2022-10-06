n = int(input())
a = list(map(int,input().split()))
ans = 0
a_dic = [a[0]]
for i in range(1,n):
    if(a[i-1]!=a[i]):
        a_dic.append(a[i])
for i in range(1,len(a_dic)-1):
    if(a_dic[i-1]<a_dic[i] and a_dic[i+1]<a_dic[i]):
        ans+=1        
    elif(a_dic[i-1]>a_dic[i] and a_dic[i+1]>a_dic[i]):
        ans+=1        
print(ans)
