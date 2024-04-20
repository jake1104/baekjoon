L=[]
for i in range(1001):
    L.append([])
    for j in range(1001):
        L[i].append(0)
N=int(input())
for i in range(N):
    a=list(map(int,input().split()))
    for j in range(a[0],a[0]+a[2]):
        for k in range(a[1],a[1]+a[3]):
            L[j][k]=i+1
O=[]
for i in range(N):
    O.append(0)
for i in range(N):
    for j in range(1001):
        for k in range(1001):
            if i+1==L[j][k]:
                O[i]+=1
for i in O:
    print(i)