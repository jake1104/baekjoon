import sys
N,M=map(int,sys.stdin.readline().split())
L={}
for i in range(N):
    L[i+1]=0
a=[list(map(int,sys.stdin.readline().split())) for i in range(M)]
for i in a:
    L[i[0]]+=1
    L[i[1]]-=1
for i in range(N):
    L[i+1]+=i+1
count={}
for i in range(N):
    count[i+1]=0
for i in L:
    count[L[i]]+=1
if max(count.values())>1:
    print(-1)
else:
    print(*list(L[i+1] for i in range(N)))