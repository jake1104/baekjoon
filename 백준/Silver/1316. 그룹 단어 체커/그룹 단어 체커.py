def f(x):
    c=[0 for i in range(26)]
    while len(x)>0:
        t=ord(x[0])-ord('a')
        if c[t]:
            return False
        c[t]=1
        rt=x[0]
        while True:
            if len(x)==0:
                return True
            if x[0]!=rt:
                break
            x=x[1:len(x)]
    return True
N=int(input())
C=0
for i in range(N):
    if f(input()):
        C+=1
print(C)