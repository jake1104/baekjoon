N,M=map(int,input().split())
DNAs=[list(input())for i in range(N)]
DNAtypes=['A','C','G','T']
Maxtypes=[]
HammingDistance=0
for i in range(M):
  tmpMaxList=list((True if max(sum((1 if DNAs[l][i] == k else 0) for l in range(N)) for k in DNAtypes) == sum((1 if k[i] == j else 0) for k in DNAs) else False) for j in DNAtypes)
  for j in range(len(tmpMaxList)):
    if tmpMaxList[j]:
      Maxtypes.append(DNAtypes[j])
      break
  for j in range(len(DNAs)):
    if Maxtypes[i] != DNAs[j][i]:
      HammingDistance += 1
print(''.join(Maxtypes))
print(HammingDistance)
