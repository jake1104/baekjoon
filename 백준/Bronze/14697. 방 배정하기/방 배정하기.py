A,B,C,N=map(int,input().split())
c=False
if N%A==0 or N%B==0 or N%C==0:
  c=True
for i in range(50):
  for j in range(50):
    for k in range(50):
      if A*i+B*j+C*k==N:
        c=True
      if c:
        break
    if c:
      break
  if c:
    break
print(1 if c else 0)