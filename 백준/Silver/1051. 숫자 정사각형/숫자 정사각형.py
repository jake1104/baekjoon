import sys
input = sys.stdin.readline

N, M = map(int, input().split())

L = [list(input()) for i in range(N)]
for i in range(len(L)):
  L[i].remove(L[i][-1])
  L[i] = [int(j) for j in L[i]]

max_size = 0

for i in range(N):
  for j in range(M):
    for k in range(min(N-i, M-j)):
      if L[i][j] == L[i+k][j] == L[i][j+k] == L[i+k][j+k]:
        max_size = max(max_size, (k+1)**2)

print(max_size)