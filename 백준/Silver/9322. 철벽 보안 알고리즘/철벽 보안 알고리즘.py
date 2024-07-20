T=int(input())
'''L=[]
for i in range(T):
  n=int(input())
  k1=list(input().split())
  k2=list(input().split())
  p=list(input().split())
  L.append([n,k1,k2,p])'''
L=[[int(input()),list(input().split()),list(input().split()),list(input().split())] for i in range(T)]
for i in L:
  d={}
  for j in range(i[0]):
    d[i[2][j]]=i[3][j]
  out=""
  for j in i[1]:
    out+=d[j]+" "
  print(out)