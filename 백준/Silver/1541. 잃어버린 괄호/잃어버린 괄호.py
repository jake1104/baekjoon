a=input().split('-')
m=[]
for i in a:
    c=0
    s=i.split('+')
    for j in s:
        c+=int(j)
    m.append(c)
n=m[0]
for i in range(1, len(m)):
    n-=m[i]
print(n)