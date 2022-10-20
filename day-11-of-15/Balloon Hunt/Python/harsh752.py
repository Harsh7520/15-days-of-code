s = input()
c = 0
bc = s.count("b")
ac = s.count("a")
lc = s.count("l")
oc = s.count("o")
nc = s.count("n")
while(bc>0 and ac>0 and lc>0 and oc>0 and nc>0):
    bc-=1
    ac-=1
    lc-=2
    oc-=2
    nc-=1
    if(bc>=0 and ac>=0 and lc>=0 and oc>=0 and nc>=0):
        c+=1
print(c)
