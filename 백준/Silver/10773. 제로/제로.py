K=int(input())
L=list(int(input()) for i in range(K))
stack=[]
for i in L:
  if i==0:
    stack.pop()
  else:
    stack.append(i)
print(sum(stack))