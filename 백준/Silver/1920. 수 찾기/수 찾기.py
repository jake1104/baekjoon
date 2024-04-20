N=int(input())
A=sorted(list(map(int,input().split())))
M=int(input())
MA=list(map(int,input().split()))

def isIn(arr,target):
  start=0
  end=len(arr)-1
  while start<=end:
    mid=(start+end)//2
    if arr[mid]==target:
      return True
    elif arr[mid]>target:
      end=mid-1
    else:
      start=mid+1
  return False
for i in MA:
  print(1 if isIn(A,i) else 0)