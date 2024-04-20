N=int(input())
cnt=0
for i in range(N):
  if i+1<100 or int(str(i+1)[1])-int(str(i+1)[0])==int(str(i+1)[2])-int(str(i+1)[1]):
    cnt+=1
print(cnt)