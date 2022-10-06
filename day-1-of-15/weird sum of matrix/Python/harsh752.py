m = int(input())
n = int(input())
a = list(map(int,input().split()))
mat = []
cnt = 0
lst = []
for i in range(len(a)):
    if(cnt<n):
        lst.append(a[i])
        cnt+=1
    else:
        mat.append(lst)
        lst = [a[i]]
        cnt = 1
mat.append(lst)
ans = 0
for j in range(0,m-2):
    for i in range(0,n-2):
            if(mat[j][i]+mat[j][i+1]+mat[j][i+2]+mat[j+1][i+1]+mat[j+2][i]+mat[j+2][i+1]+mat[j+2][i+2]>ans):
                ans = mat[j][i]+mat[j][i+1]+mat[j][i+2]+mat[j+1][i+1]+mat[j+2][i]+mat[j+2][i+1]+mat[j+2][i+2]
print(ans)
