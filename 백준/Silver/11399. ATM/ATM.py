n=int(input())
p=list(map(int,input().split()))
p.sort()
a=0
for i in range(1,n+1):
    a+=sum(p[0:i])
print(a)