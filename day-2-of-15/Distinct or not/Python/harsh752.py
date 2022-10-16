n = int(input())
a = list(map(int,input().split()))
s = set(a)
b = False
for i in s:
    if(a.count(i)>1):
        b = True
        break
if(b):
    print("true")
else:
    print("false")
