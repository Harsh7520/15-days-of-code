n = int(input())
a = list(map(int,input().split()))
cnts = []
b = True
s = set(a)
for i in (s):
    c = a.count(i)
    if(c not in cnts):
        cnts.append(c)
    else:
        b = False
        break
if(b):
    print("true")
else:
    print("false")
