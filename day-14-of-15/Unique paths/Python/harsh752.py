import math
m,n = map(int,input().split())
ans = math.factorial(m+n-2)//(math.factorial(m-1)*math.factorial(n-1))
print(ans)
