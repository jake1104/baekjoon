Nlist=list(str(input()))
Nlist[-1]=0
Nlist[-2]=0
Nstr=""
for i in Nlist:
  Nstr=f"{Nstr}{str(i)}"
N=int(Nstr)
F=int(input())
while not (N/F).is_integer():
  N+=1
print(str(N)[-2:])