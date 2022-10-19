n = int(input())
a = list(input().split())
r1 = "qwertyuiop"
r1+=r1.upper()
r2 = "asdfghjkl"
r2+=r2.upper()
r3 = "zxcvbnm"
r3+=r3.upper()
ans = []
for i in a:
    b1 = False
    b2 = False
    b3 = False
    for j in range(len(i)):
        if(i[j] in r1):
            b1 = True
        elif(i[j] in r2):
            b2 = True
        elif(i[j] in r3):
            b3 = True
    if(b1==True and b2==False and b3==False):
        ans.append(i)
    elif(b1==False and b2==True and b3==False):
        ans.append(i)
    elif (b1 == False and b2 == False and b3 == True):
        ans.append(i)
print(*ans)
