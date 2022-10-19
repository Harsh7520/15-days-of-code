s = input()
g = input()
b = False
for i in range(1,len(s)):
    rf = s[0:i]
    rs = s[i:]
    if(rs+rf==g):
        b = True
        break
if(b):
    print("true")
else:
    print("false")
