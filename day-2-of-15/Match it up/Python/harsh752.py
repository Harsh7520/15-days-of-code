s1 = input()
s2 = input()
b = True
for i in range(len(s1)):
    if(s1[i] in s2 and s1.count(s1[i])<=s2.count(s1[i])):
        continue
    else:
        b = False
        break
if(b):
    print("true")
else:
    print("false")
