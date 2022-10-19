n = int(input())
a = list(map(int,input().split()))
newnum = a.copy()
while(len(a)>1):
    newnum = []
    for i in range(len(a)//2):
        if(i%2==0 and i<n/2):
            newnum.append(min(a[2*i],a[(2*i)+1]))
        elif(i%2!=0 and i<n/2):
            newnum.append(max(a[2*i],a[(2*i)+1]))
    a = newnum.copy()
print(*a)
