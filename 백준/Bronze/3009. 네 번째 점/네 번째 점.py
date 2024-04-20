L=[]
for i in range(3):
  L.append(list(map(int,input().split())))
xs=[]
ys=[]
for i in L:
  xs.append(i[0])
  ys.append(i[1])
x=0
y=0
for i in xs:
  x=i if xs.count(i)==1 else x
for i in ys:
  y=i if ys.count(i)==1 else y
print(x,y)