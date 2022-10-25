n = int(input())
a = list(map(int,input().split()))
if(sum(a)%4==0):
    print("true")
else:
    print("false")
