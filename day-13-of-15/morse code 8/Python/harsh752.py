n = int(input())
a = list(input().split())
arr = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
ans = []
for i in a:
    str = ""
    for j in range(len(i)):
        str+=arr[ord(i[j])-ord('a')]
    ans.append(str)
print(len(set(ans)))
