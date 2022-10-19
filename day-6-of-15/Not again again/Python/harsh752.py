s = input()
if(len(s)==1):
    print(0)
else:
    b = True
    for i in range(len(s)):
        if(s.count(s[i])>1):
            continue
        else:
            b = False
            print(i)
            break
    if(b):
        print(-1)
