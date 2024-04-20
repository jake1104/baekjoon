A=B=1; L=[]
while not A==B==0:
  A,B=map(int,input().split())
  L.append(A+B)
L.pop()
for i in L:
  print(i)