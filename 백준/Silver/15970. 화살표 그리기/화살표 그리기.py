N=int(input())
L=[list(map(int,input().split())) for i in range(N)]
m=10**5
l=0
for i in range(N):
  for j in range(N):
    if i!=j and L[i][1]==L[j][1]:
      m=min(abs(L[i][0]-L[j][0]),m)
  l+=m
  m=10**5
print(l)