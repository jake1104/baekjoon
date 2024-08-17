N=int(input())
for i in range(N):
  l=input()
  c=0
  r=''
  for j in range(len(l)):
    if j!=0:
      if l[j]==l[j-1]:
        c+=1
      else:
        r+=f" {c} {l[j-1]}"
        c=1
    else:
      c=1
  r+=f" {c} {l[-1]}"
  r=r[1:]
  print(r)