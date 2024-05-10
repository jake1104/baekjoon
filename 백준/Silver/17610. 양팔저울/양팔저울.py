k=int(input())
L=list(map(int,input().split()))
S=sum(L)
r=set()
def f(c,t):
  if c==len(L):
    if t>0:
      r.add(t)
    return
  f(c+1,t)
  f(c+1,t+L[c])
  f(c+1,t-L[c])
f(0,0)
print(S-len(r))