N,M=map(int,input().split())
L=[list(map(int,input().split())) for _ in range(N)]
K=int(input())
L2=[list(map(int,input().split())) for _ in range(K)]
r=[]
for i in L2:
  r.append(0)
  for j in L[i[0]-1:i[2]]:
    r[-1]+=sum(j[i[1]-1:i[3]])
for i in r:
  print(i)