N=int(input())
L=[list(input().split()) for _ in range(N)]
d={}
types=[]
for i in L:
  if i[1] not in types:
    types.append(i[1])
for i in types:
  d[i]=[]
for i in L:
  d[i[1]].append(i[0])
c=0
out=[]
for i in list(d):
  if len(d[i])==2 and i!='-':
    c+=1
    out.append(d[i])
print(c)
for i in out:
  print(*i)