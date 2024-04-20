n=int(input())
L=list(int(input()) for i in range(n))
n_stack=list(range(1,n+1))
extra_stack=[]
stack=[]
output=[]
for i in range(n):
  if L[i] in n_stack:
    for i in range(n_stack.index(L[i])+1):
      output.append("+")
      extra_stack.append(n_stack[0])
      n_stack.pop(0)
    output.append("-")
    stack.append(extra_stack[-1])
    extra_stack.pop()
  elif L[i]==extra_stack[-1]:
    stack.append(extra_stack[-1])
    extra_stack.pop()
    output.append("-")
  else:
    output=['NO']
    break
for i in output:
  print(i)