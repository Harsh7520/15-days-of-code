n = int(input())
a = list(map(int,input().split()))
a.sort()
eves = []
cnt = 0
mx_elem = 4000
s = set(a)
for i in s:
    if(i%2==0 and a.count(i)>cnt):
        cnt = a.count(i)
for i in s:
    if(i%2==0 and a.count(i)==cnt and i<mx_elem):
        mx_elem = i
if(mx_elem==4000):
    mx_elem=-1
print(mx_elem)
