import itertools
s = input()
arr = ["abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"]
ans = []
for i in range(len(s)):
    ans.append(arr[int(s[i])-2])
products = list(itertools.product(*ans))
str = []
for i in range(len(products)):
    str.append("".join(products[i]))
print(*str)
