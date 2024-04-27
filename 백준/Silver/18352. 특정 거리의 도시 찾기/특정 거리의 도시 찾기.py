from collections import deque
N,M,K,X=map(int,input().split())
g=[[] for _ in range(N+1)]
for i in range(M):
  a,b=map(int,input().split())
  g[a].append(b)
d=[-1]*(N+1)
d[X]=0
q=deque([X])
while q:
  v=q.popleft()
  for i in g[v]:
    if d[i]==-1:
      d[i]=d[v]+1
      q.append(i)
if K in d:
  for i in range(1,N+1):
    if K==d[i]:
      print(i)
else:
  print(-1)