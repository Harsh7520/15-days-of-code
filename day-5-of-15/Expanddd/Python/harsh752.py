s = input()
ans = []
for i in range(len(s)):
    if(s[i]!=']'):
        ans.append(s[i])
    else:
        sub = ""
        while(ans[len(ans)-1]!='['):
            sub += ans.pop()
        ans.pop()
        mul = ""
        while(ans and ans[len(ans)-1].isdigit()):
            mul+=ans.pop()
        ans.append(int(mul)*sub[::-1])
print("".join(ans))
