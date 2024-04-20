l=[i+1 for i in range(int(input()))]
while len(l)!=1:
    for i in range(len(l)):
        if i%2==0:
            l[i]=0
    for i in l:
        if i==0:
            l.remove(i)
print(l[0])