import math
T=int(input())
L=[list(map(int, input().split())) for _ in range(T)]
for i in L:
  print(math.lcm(i[0],i[1]))