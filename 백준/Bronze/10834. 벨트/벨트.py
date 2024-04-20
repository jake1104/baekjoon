M=int(input())
L=[list(map(int,input().split())) for _ in range(M)]
S=1
Div=1
Mul=1
D=0
for i in L:
  Div*=i[0]
  Mul*=i[1]
  D=(1 if D==0 else 0) if i[2]==1 else D
S=S*Mul/Div
print(D,int(S) if int(S)==S else S)