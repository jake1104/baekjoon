N=int(input())
S=[list(map(int,input().split())) for _ in range(N)]
m=1001
for s in S:
    if s[0]<=s[1] and m>s[1]:
        m=s[1]
if m==1001:
    print(-1)
else:
    print(m)