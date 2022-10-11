s1 = input()
s2 = input()
ls1 = list(s1)
ls2 = list(s2)
lsb = ls1.copy()
b = False
for i in range(len(ls1)):
    if(b==False):
        for j in range(i,len(ls1)):
            ls1 = lsb.copy()
            if(i==j):
                continue
            else:
                ls1[i],ls1[j] = ls1[j],ls1[i]
                if(ls1==ls2):
                    b = True
                    break
if(b):
    print("true")
else:
    print("false")
