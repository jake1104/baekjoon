from collections import deque
import sys
input=sys.stdin.readline
N,M=map(int,input().split())
c=[[] for _ in range(N+1)]
for i in range(M):
  A,B=map(int,input().split())
  c[B].append(A)
p=[0 for _ in range(N+1)]
def bfs(start):
  queue=deque([start])
  r=[False]*(N+1)
  r[start]=True
  while queue:
    v=queue.popleft()
    for j in c[v]:
      if not r[j]:
        queue.append(j)
        r[j]=True
        p[i]+=1
for i in range(1,N+1):
  bfs(i)
a=[]
for i in range(N+1):
  if p[i]==max(p):
    a.append(i)
print(*a)