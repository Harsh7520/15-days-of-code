n = int(input())
a = list(map(int,input().split()))
ones_len = 0
one_ans = []
if(n==1):
    print(a[0])
elif(a.count(0)==0):
    print(n-1)
else:
    for i in range(n):
        if(a[i]==0):
            a1 = a.copy()
            a1.pop(i)
            j = 0
            while(j<len(a1)):
                if(a1[j]==1):
                    ones_len+=1
                else:
                    one_ans.append(ones_len)
                    ones_len = 0
                j+=1
            one_ans.append(ones_len)
    print(max(one_ans))
