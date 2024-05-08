N=int(input())
L=[list(map(int,input().split())) for _ in range(N)]
w=0
b=0
def f(x,y,n):
  global w,b
  l=list(map(lambda a:a[x:x+n],L[y:y+n]))
  if sum(map(sum,l))==0:
    w+=1
  elif sum(map(sum,l))==n**2:
    b+=1
  else:
    dx=[0,0,1,1]
    dy=[0,1,0,1]
    for i in range(4):
      f(x+int(n/2)*dx[i],y+int(n/2)*dy[i],int(n/2))
f(0,0,N)
print(f"{w}\n{b}")