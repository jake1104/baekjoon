import sys

T=int(sys.stdin.readline())
L=list(list(map(int, sys.stdin.readline().split())) for i in range(T))

n=0

for i in L:
  for j in range(i[0],i[1]+1):
    n += str(j).count("0")
  print(n)
  n=0