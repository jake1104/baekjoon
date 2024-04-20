n=int(input())
C=0
def f(n):
    a,b=1,1
    for n in range(n):
        yield a
        a,b=b,a+b
L=list(f(n))
print(max(L))