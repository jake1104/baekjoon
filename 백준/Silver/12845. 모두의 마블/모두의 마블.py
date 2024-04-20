n=int(input())
L=list(map(int,input().split()))
gold=0
def getIndex(arr,element):
  for i in range(n):
    if arr[i]==element:
      return i
while len(L)!=1:
  Lmax=max(L)
  LmaxIndex=getIndex(L,Lmax)
  if LmaxIndex==0:
    gold+=L[LmaxIndex]+L[LmaxIndex+1]
    del L[LmaxIndex+1]
  elif LmaxIndex==len(L)-1:
    gold+=L[LmaxIndex]+L[LmaxIndex-1]
    del L[LmaxIndex-1]
  else:
    if L[LmaxIndex+1]>L[LmaxIndex-1]:
      gold+=L[LmaxIndex]+L[LmaxIndex-1]
      del L[LmaxIndex-1]
    elif L[LmaxIndex+1]<L[LmaxIndex-1]:
      gold+=L[LmaxIndex]+L[LmaxIndex+1]
      del L[LmaxIndex+1]
print(gold)