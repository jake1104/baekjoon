import sys
T=int(sys.stdin.readline())
L=[sys.stdin.readline()[:-1] for _ in range(T)]
for i in L:
  print(i[0]+i[-1])