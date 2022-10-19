n = int(input())
a = list(map(int,input().split()))
b = False
for i in range(len(a)):
    for j in range(len(a)):
        for k in range(len(a)):
            if(i<j<k and a[i]<a[j]<a[k]):
                b = True
                break
if(b):
    print("true")
else:
    print("false")
