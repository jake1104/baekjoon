N=int(input())
L=[]
for i in range(N):
  L.append(list(map(int,input().split())))
min_x=100000
max_x=-100000
min_y=100000
max_y=-100000
for i in L:
  min_x=min(min_x,i[0])
  max_x=max(max_x,i[0])
  min_y=min(min_y,i[1])
  max_y=max(max_y,i[1])
print((max_x-min_x)*(max_y-min_y))