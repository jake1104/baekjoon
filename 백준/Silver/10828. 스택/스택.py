N=int(input())
L=[input() for _ in range(N)]
stack=[]
output=[]
for i in L:
  if i.startswith("push "):
    stack.append(int(i[4:]))
  elif i=="pop":
    if stack==[]:
      print(-1)
    else:
      print(stack[-1])
      stack.pop()
  elif i=="size":
    print(len(stack))
  elif i=="empty":
    print(1 if stack==[] else 0)
  elif i=="top":
    print(-1 if stack==[] else stack[-1])