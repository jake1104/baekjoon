N=int(input())
L=list(map(int,input().split()))
for i in range(len(L)):
    L[i]=[L[i]]
R=N
for i in range(R):
    if 0 in L[i]:
        L[i]=[]
        R-=1
    elif i<N-1:
        for j in range(len(L[i])):
            if L[i][j]<=L[i+1][0]:
                L[i+1].append(L[i+1][0]-L[i][j])
print(R)