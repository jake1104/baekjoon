N=int(input())
Nn=int(str(N)[1])*10+int(str(sum(list(map(int, list(str(N))))))[-1]) if len(str(N)) == 2 else N*11
n=1
while N!=Nn:
  Nn=int(str(Nn)[1])*10+int(str(sum(list(map(int, list(str(Nn))))))[-1]) if len(str(Nn)) == 2 else Nn*11
  n+=1
print(n)