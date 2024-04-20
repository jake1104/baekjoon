n=int(input())
m,c=0,0
l=list()
for i in range(n):
    l.append(int(input()))
for i in l:
    if i>m:
        m=i
        c+=1
print(c)
m,c=0,0
l.reverse()
for i in l:
    if i>m:
        m=i
        c+=1
print(c)