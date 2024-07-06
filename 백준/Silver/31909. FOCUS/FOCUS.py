import math
N=int(input())
L=list(map(int,input().split()))
K=int(input())
keys=[0,1,2,3,4,5,6,7]
for k in L:
  c=0
  t=k
  while t%2==0:
    c+=1
    t=t/2
    if t==int(t):
      t=int(t)
  j=math.floor(math.log2(t))+c
  i=math.floor(math.log2(t-2**(j-c)))+c
  if 2**i+2**j==k:
    ii=keys.index(i)
    ij=keys.index(j)
    keys[ii],keys[ij]=keys[ij],keys[ii]
print(keys.index(K))