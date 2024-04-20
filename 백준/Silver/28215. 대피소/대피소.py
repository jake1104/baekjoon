from itertools import combinations
import sys
N,K=map(int,input().split())
L=[list(map(int,input().split())) for _ in range(N)]
def a(i,j,k):
  d=0
  for h in L:
    d=max(d,min(
      abs(h[0]-L[i][0])+abs(h[1]-L[i][1]),
      abs(h[0]-L[j][0])+abs(h[1]-L[j][1]),
      abs(h[0]-L[k][0])+abs(h[1]-L[k][1])))
  return d
INF=sys.maxsize
for i in combinations(range(N),K):
  if K==1:
    INF=min(INF,a(i[0],i[0],i[0]))
  if K==2:
    INF=min(INF,a(i[0],i[0],i[1]))
  if K==3:
    INF=min(INF,a(i[0],i[1],i[2]))
print(INF)