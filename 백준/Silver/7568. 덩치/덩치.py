n=int(input())
l=[list(map(int,input().split())) for _ in range(n)]
for i in range(n):
    r=1+sum(i!=j and l[i][0]<l[j][0] and l[i][1]<l[j][1] for j in range(n))
    print(r,end=' ')