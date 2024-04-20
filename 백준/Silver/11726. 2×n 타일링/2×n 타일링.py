n=int(input())
def f(n):
    a, b = 1, 2
    for n in range(n):
        yield a
        a,b=b,a+b
l=[n%10007 for n in f(n)]
print(l[-1])