N,M=map(int,input().split())
L=[list(map(int,input().split())) for _ in range(M)]
T=list([i+1] for i in range(N))
for i in range(M):
  for j in range(len(T)):
    if L[i][0] in T[j]:
      for k in range(len(T)):
        if L[i][1] in T[k]:
          if j!=k:
            for l in T[k]:
              T[j].append(l)
            del T[k]
          break
      break
print(len(T))