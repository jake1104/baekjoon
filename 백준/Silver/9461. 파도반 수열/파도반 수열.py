T=int(input())
L=[int(input()) for _ in range(T)]
def P(n):
    a,b,c=1,1,1
    for n in range(n):
        yield a
        a,b,c=b,c,a+b
for i in L:
    l=list(P(i))
    print(l[-1])
    del l