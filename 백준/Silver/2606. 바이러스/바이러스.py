cnt=int(input())
L=[list(map(int,input().split())) for _ in range(int(input()))]
C=list(0 for _ in range(cnt))
C[0]=1
def dfs():
  for i in L:
    if C[i[0]-1]+C[i[1]-1]==1:
      C[i[0]-1]=C[i[1]-1]=1
      dfs()
  return C.count(1)-1
print(dfs())