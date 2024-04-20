from sys import stdin
from sys import setrecursionlimit
setrecursionlimit(1000000)
N=int(stdin.readline())
L=[list(map(int,stdin.readline().split())) for _ in range(N)]
dx=[-1,0,1,0]
dy=[0,-1,0,1]
def dfs(x,y,h):
  for i in range(4):
    nx,ny=x+dx[i],y+dy[i]
    if 0<=nx<N and 0<=ny<N and not v[nx][ny] and L[nx][ny]>h:
      v[nx][ny]=True
      dfs(nx,ny,h)
max_s=0
for h in range(max(map(max,L))):
  s=0
  v=[[False]*N for _ in range(N)]
  for i in range(N):
    for j in range(N):
      if L[i][j]>h and not v[i][j]:
        s+=1
        v[i][j]=True
        dfs(i,j,h)
  max_s=max(max_s,s)
print(max_s)