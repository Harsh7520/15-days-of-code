n = int(input())
k = int(input())
a = list(map(int,input().split()))
b = False
for i in range(n):
    for j in range(n):
        if(i!=j and a[i]==a[j] and abs(i-j)<k):
            b = True
            break
if(b):
    print("true")
else:
    print("false")
