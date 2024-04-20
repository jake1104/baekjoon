n=int(input())
m=0
c=0
l=[int(input()) for _ in range(n)]
l.reverse()
for i in l:
    if i > m:
        c+=1
        m=i
print(c)