def f(l):
    a=[1,1]
    while l > len(a)-1:
        a.append(a[len(a)-1]+a[len(a)-2])
    return a[len(a)-2]
n=int(input())
print((f(n)+f(n+1))*2)