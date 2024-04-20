N,K=map(int,input().split())
L=list(map(int,input().split()))
L.sort(reverse=True)
S=0
for i in range(K):
    S+=L[i]
S-=K*(K-1)/2
print(int(S))