N=int(input())
L=sorted(list(map(int,input().split())))
t={}
start=0
end=N-1
while end>start:
  t[abs(L[start]+L[end])]=[L[start],L[end]]
  if L[start]+L[end]<0:
    start+=1
  elif L[start]+L[end]>0:
    end-=1
  else:
    break
print(*t[min(list(t))])