n = int(input())
a = list(map(int,input().split()))
beauty = 0
for i in range(1,len(a)-1):
    b = True
    b1 = True
    for j in range(i):
        for k in range(i+1,len(a)):
            if(a[j]<a[i]<a[k] and b and b1):
                continue
            else:
                b1 = False
    if(b1):
        b = False
        beauty+=2
    if(a[i-1]<a[i]<a[i+1] and b):
        beauty+=1
print(beauty)
