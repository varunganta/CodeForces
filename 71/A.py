n = int(input())
for i in range(0,n):
    s=str(input())
    if(len(s)>10):
        ans=s[0]+str(len(s)-2)+s[len(s)-1]
        print(ans)
    else:
        print(s)