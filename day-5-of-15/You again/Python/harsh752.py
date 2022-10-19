s = input()
a = []
for i in range(len(s)):
    a.append(s[i])
    if(a.count(s[i])==2):
        print(s[i])
        break
