N=int(input())
A=list(map(int,input().split()))
result1=0
result2=0
p=0
for i in A:
  if i%2==1:
    p+=1
  else:
    result1+=p
A.reverse()
p=0
for i in A:
  if i%2==1:
    p+=1
  else:
    result2+=p
print(min(result1,result2))