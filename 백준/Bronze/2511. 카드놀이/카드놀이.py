L0=list(map(int,input().split()))
L1=list(map(int,input().split()))
A=B=0
LW=''
for i in range(10):
  if L0[i]>L1[i]:
    A+=3
    LW='A'
  elif L0[i]<L1[i]:
    B+=3
    LW='B'
  else:
    A+=1
    B+=1
print(A,B)
if A>B:
  print('A')
elif A<B:
  print('B')
elif LW=='A':
  print('A')
elif LW=='B':
  print('B')
else:
  print('D')