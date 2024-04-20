n=int(input())
a=sorted(list(map(int,input().split())))
m=int(input())
b=list(map(int,input().split()))
t={}
for i in a:
    if i in t:
        t[i]+=1
    else:
        t[i]=1
for i in b:
    if i in t:
        print(t[i],end=' ')
    else:
        print(0,end=' ')