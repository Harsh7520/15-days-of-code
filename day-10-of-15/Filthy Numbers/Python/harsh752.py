n = int(input())
i = 1
c = 1
while(c<n):
    i+=1
    x = i
    while(x%2==0):
        x=x//2
    while(x%3==0):
        x=x//3
    while(x%5==0):
        x=x//5
    if(x==1):
        c+=1
    else:
        continue
print(i)
