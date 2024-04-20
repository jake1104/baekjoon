a=int(input())
c=[]
for i in range(a):
    b=0
    for j in str(i):
        b+=int(j)
    b+=i
    if(b==a):
        c.append(i)
if c==[]:
    print(0)
else:
    print(min(c))