N=int(input())
A=list(map(int,input().split()))
L=[1]*N
for i in range(1,N):
  for j in range(i):
    if A[j]<A[i]:
      L[i]=max(L[i],L[j]+1)
print(max(L))