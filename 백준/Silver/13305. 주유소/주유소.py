import sys
N=int(input())
dis_L=list(map(int, sys.stdin.readline().split()))
cos_L=list(map(int, sys.stdin.readline().split()))
cos_L.pop()
res=cos_L[0]*dis_L[0]
c=cos_L[0]
for i in range(1,N-1):
  if c>cos_L[i]:
    c=cos_L[i]
  res+=c*dis_L[i]
print(res)