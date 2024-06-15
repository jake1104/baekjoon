T=int(input())
L=[list(map(int,input().split())) for _ in range(T*3)]

def bisect_right(a, x):
  left = 0
  right = len(a)
  while left < right:
    mid = (left + right) // 2
    if a[mid] < x:
      left = mid +1
    else:
      right = mid
  return left

for i in range(T):
  L[i*3+1].sort()
  L[i*3+2].sort()
  c=0
  for j in L[i*3+1]:
    c+=bisect_right(L[i*3+2],j)
  print(c)