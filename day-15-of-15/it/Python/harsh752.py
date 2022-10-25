n = int(input())
k = int(input())
a = list(map(int,input().split()))
rots = k%n
p1 = a[len(a)-rots:len(a)]
p2 = a[:len(a)-rots]
p1.extend(p2)
print(*p1)
