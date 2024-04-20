n, k = map(int, input().split())
d = [[0]*2 for _ in range(6)]
for _ in range(n):
    s,y= map(int, input().split())
    d[y-1][s-1] += 1
r=0
for a in range(6):
    for b in range(2):
        if(d[a][b]%k == 0):
            r += d[a][b]/k
        else:
            r += d[a][b]//k + 1
print(int(r))