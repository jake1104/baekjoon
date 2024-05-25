N=int(input())
L=[input() for _ in range(N)]
s=sorted(list(set(L)))
c=[L.count(i) for i in s]
I=0
for i in range(len(c)):
  if max(c)==c[i]:
    I=i
    break
print(s[I])