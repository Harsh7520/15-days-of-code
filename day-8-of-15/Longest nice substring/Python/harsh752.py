s = input()
ans = ""
for i in range(len(s)):
    for j in range(i,len(s)):
        sub = s[i:j+1]
        b = True
        for k in range(len(sub)):
            if(ord(sub[k])<91):
                if(chr(ord(sub[k])+32) not in sub):
                    b = False
            else:
                if (chr(ord(sub[k]) - 32) not in sub):
                    b = False
        if(b and len(sub)>len(ans)):
            ans = sub
print(ans)
