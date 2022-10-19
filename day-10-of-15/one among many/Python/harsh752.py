n = int(input())
c = 0
for i in range(10**n):
    if(len(set(str(i)))==len(str(i))):
        c+=1
print(c)
