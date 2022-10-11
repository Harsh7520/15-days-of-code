n = int(input())
a = list(map(int,input().split()))
sumu = 0
for i in range(n):
    for j in range(i,n):
        sumu = max(sumu,sum(a[i:j+1]))
print(sumu)
