def xorOfArray(arr):
    xor_arr = 0
    for i in range(len(arr)):
        xor_arr = xor_arr ^ arr[i]
    return xor_arr
n = int(input())
a = list(map(int,input().split()))
ans = [a[0]]
for i in range(1,n):
    j = 0
    while(xorOfArray(ans[:i])^j!=a[i]):
        j+=1
    ans.append(j)
print(*ans)
