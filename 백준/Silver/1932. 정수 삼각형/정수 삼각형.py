n=int(input())
p=[]
for i in range(n):
    p.append(list(map(int,input().split())))
for i in range(1,n):
    for j in range(0,i+1):
        if j==0:
            p[i][0]+=p[i-1][0]
        elif j==i:
            p[i][j]+=p[i-1][j-1]
        else:
            p[i][j]+=max(p[i-1][j-1],p[i-1][j])
print(max(p[n-1]))