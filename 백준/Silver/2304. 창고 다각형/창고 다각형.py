import sys
N=int(input())
L=[list(map(int, sys.stdin.readline().split())) for _ in range(N)]
L.sort()
max_L_idx=0
for i in range(len(L)):
    if L[max_L_idx][1] < L[i][1]:
        max_L_idx=i
ans=0
h=L[0][1]
for i in range(0,max_L_idx):
    if L[i+1][1] > h:
        ans+=h*(L[i+1][0]-L[i][0])
        h=L[i+1][1]  
    else:
        ans+=h*(L[i+1][0]-L[i][0])
h=L[-1][1]
for j in range(N-1,max_L_idx,-1):
    if L[j-1][1] > h:
        ans+=h*(L[j][0]-L[j-1][0])
        h=L[j-1][1]
    else:
        ans+=h*(L[j][0]-L[j-1][0])
print(ans+L[max_L_idx][1])