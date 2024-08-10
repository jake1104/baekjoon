N=int(input())
L=list(map(int,input().split()))
#S=[sum(L[:i+1]) for i in range(N)]
S=[L[0]]
for i in range(1,N):
    S.append(S[i-1]+L[i])
r=0
# 벌통 L[-1]
for i in range(1,N-1):
    r=max(r,S[-1]*2-L[0]-L[i]-S[i])

# 벌통 L[0]
for i in range(1,N-1):
    r=max(r,S[-2]+S[i-1]-L[i])

# 벌통 둘 다 아님
for i in range(1,N-1):
    r=max(r,S[-2]+L[i]-L[0])

print(r)
'''
9  9  4  1  4  9  9
9  18 22 23 27 36 45
45 36 27 23 22 18 9

(45-9)+(45-23)-1=57
45*2-9-23-1=57
'''
