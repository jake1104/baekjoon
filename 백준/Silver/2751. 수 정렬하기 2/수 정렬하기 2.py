import sys
N=int(sys.stdin.readline())
L=[int(sys.stdin.readline()) for _ in range(N)]
L.sort()
for i in L:
  print(i)