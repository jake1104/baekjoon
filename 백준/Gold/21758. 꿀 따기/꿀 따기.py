N=int(input())
L=list(map(int,input().split()))
S=[L[0]]
for i in range(1,N):
    S.append(S[i-1]+L[i])
r=0
for i in range(1,N-1):
    r=max(r,S[-1]*2-L[0]-L[i]-S[i])
for i in range(1,N-1):
    r=max(r,S[-2]+S[i-1]-L[i])
for i in range(1,N-1):
    r=max(r,S[-2]+L[i]-L[0])
print(r)
