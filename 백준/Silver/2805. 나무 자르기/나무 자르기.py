N,M=map(int,input().split())
wood_heights=sorted(list(map(int,input().split())))
start=0
end=max(wood_heights)
c=0
while start<=end:
  mid=(start+end)//2
  c=0
  for i in range(len(wood_heights)):
    c+=max(0, wood_heights[i]-mid)
  if c>=M:
    start=mid+1
  elif c<M:
    end=mid-1
print(end)