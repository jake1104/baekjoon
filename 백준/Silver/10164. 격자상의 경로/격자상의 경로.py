n,m,k=map(int,input().split())
d=[[0] * m for _ in range(n)]
if k==0:
    for i in range(n):
        for j in range(m):
            if i==0 or j==0:
                d[i][j]=1
            else:
                d[i][j]=d[i-1][j] + d[i][j-1]
    print(d[n-1][m-1])
else:
    x=(k-1)//m
    y=(k-1)%m
    for i in range(x+1):
        for j in range(y+1):
            if i==0 or j==0:
                d[i][j]=1
            else:
                d[i][j]=d[i-1][j] + d[i][j-1]
    for i in range(x,n):
        for j in range(y,m):
            if i==x and j==y:
                continue
            if i==x:
                d[i][j]=1
            elif j==y:
                d[i][j]=1
            else:
                d[i][j]=d[i-1][j] + d[i][j-1]
    print(d[x][y] * d[n-1][m-1])