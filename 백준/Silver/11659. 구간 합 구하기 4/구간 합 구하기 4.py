N,M=map(int,input().split())
A=list(map(int,input().split()))
L=list()
for i in range(M):
    L.append(list(map(int,input().split())))
S=list()
S.append(0)
for i in range(N):
    S.append(S[i]+A[i])
for i in L:
    print(S[i[1]]-S[i[0]-1])