T=int(input())
L=[]
for _ in range(T):
    n=int(input())
    d=[0]*(n+1)
    if n==1:
        L.append(1)
    elif n==2:
        L.append(2)
    elif n==3:
        L.append(4)
    else:
        d[1],d[2],d[3]=1,2,4
        for j in range(4,n+1):
            d[j]=d[j-1]+d[j-2]+d[j-3]
        L.append(d[n])
for i in L:
    print(i)