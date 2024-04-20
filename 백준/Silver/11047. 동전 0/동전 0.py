N,K=map(int,input().split())
S=0
L=[int(input()) for _ in range(N)]
L.sort(reverse=True)
for j in L:
    while K>=j:
        K-=j
        S+=1
print(S)