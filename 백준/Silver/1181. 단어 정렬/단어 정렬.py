import sys
N=int(sys.stdin.readline())
L=[]
for _ in range(N):
  L.append(sys.stdin.readline()[:-1])
L=list(set(L))
L.sort()
L.sort(key=len)
for i in L:
  print(i)