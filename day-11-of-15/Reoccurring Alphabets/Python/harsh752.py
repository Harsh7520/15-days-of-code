s = input()
idxs = [100000]*26
fidxs = [100000]*26
for i in range(len(s)):
    idxs[ord(s[i])-ord('a')] = i
for i in range(len(s)-1,-1,-1):
    fidxs[ord(s[i]) - ord('a')] = i
ans = ""
sorted_s = sorted(set(s))
i = 0
while(len(sorted_s)>0):
    min_ind = min(idxs)
    for j in range(len(sorted_s)):
        if(fidxs[ord(sorted_s[j])-ord('a')]<=min_ind):
            ans+=sorted_s[j]
            break
    i = s.find(ans[-1],i,min_ind+1)
    i+=1
    for j in range(len(s)-1, -1, -1):
        if(j>=i):
            fidxs[ord(s[j]) - ord('a')] = j
        else:
            break
    for j in range(len(fidxs)):
        if(fidxs[j]<i):
            fidxs[j]=100000
    idxs[ord(ans[-1])-ord('a')]=100000
    sorted_s.remove(ans[-1])
print(ans)
