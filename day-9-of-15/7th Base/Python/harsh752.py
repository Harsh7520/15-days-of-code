n = int(input())
ans = ""
b = False
if(n<0):
    b = True
    n = abs(n)
while(n>0):
    ans+=str(n%7)
    n = int(n/7)
if(b):
    ans+="-"
print(ans[::-1])
