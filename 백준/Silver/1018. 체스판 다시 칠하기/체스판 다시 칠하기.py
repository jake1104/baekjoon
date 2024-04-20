def c(e):
    n=0
    for i in range(8):
        for j in range(8):
            k=(0 if i in [0,2,4,6] else 1)
            l=(0 if j in [0, 2, 4, 6] else 1)
            if (k == 0 and l == 0) or (k==1 and l==1):
                if e[i][j]!="B": n+=1
            if (k==0 and l==1)or(k==1 and l==0):
                if e[i][j]!="W": n+=1
    m=0
    for i in range(8):
        for j in range(8):
            k=(0 if i in [0, 2, 4, 6] else 1)
            l=(0 if j in [0, 2, 4, 6] else 1)
            if (k==0 and l == 0) or (k==1 and l==1):
                if e[i][j]!="W": m+=1
            if (k == 0 and l == 1) or (k==1 and l==0):
                if e[i][j]!="B": m+=1
    return min(n,m)
n,m = map(int, input().split())
s=[list(input()) for i in range(n)]
l=list()
for i in range(n-7):
    for j in range(m-7):
        e=[z[(0+j):(8+j)] for z in s[(0+i):(8+i)]]
        l.append(c(e))
print(min(l))