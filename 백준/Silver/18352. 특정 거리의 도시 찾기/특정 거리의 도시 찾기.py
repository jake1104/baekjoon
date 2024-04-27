from collections import deque
import sys
N,M,K,X=map(int,sys.stdin.readline().split())
L=[[] for _ in range(N+1)]
for _ in range(M):
  a,b=map(int,input().split())
  L[a].append(b)
d=[-1]*(N+1)
d[X]=0
q=deque([X])
while q:
  v=q.popleft()
  for h in L[v]:
    if d[h]==-1:
      d[h]=d[v]+1
      q.append(h)
if K in d:
  for i in range(1,N+1):
    if d[i]==K:
      print(i)
else:
  print(-1)