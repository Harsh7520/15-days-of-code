a = list(map(int,input().split()))
secs = 0
while(sum(a)>0):
    a.sort()
    secs+=1
    if(a[1]>0):
        a[1]-=1
    if(a[2]>0):
        a[2]-=1
print(secs)
