n = int(input())
a = list(map(int,input().split()))
s = set(a)
max_elem = -1
max_cnt = -1
for i in s:
    cnt = a.count(i)
    if(cnt>max_cnt):
        max_elem = i
        max_cnt = cnt
print(max_elem)
