A,B,C,N=map(int,input().split())
c=False
for i in range(30):
  for j in range(30):
    for k in range(30):
      if A*i+B*j+C*k==N:
        c=True
      if c:
        break
    if c:
      break
  if c:
    break
print(1 if c else 0)