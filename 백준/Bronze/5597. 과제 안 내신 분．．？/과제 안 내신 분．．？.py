import sys
L=list(range(1,31))
for i in range(28):
  L.remove(int(sys.stdin.readline()))
for i in L:
  print(i)