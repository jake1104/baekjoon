x,y,a,b=map(int,input().split())
c=0
t=0
while a!=b:
    if a<b:
        a+=x
    elif a>b:
        b+=y
    elif x<y:
        a+=x
    elif x>y:
        b+=y
    c+=1
    if c>1000:
        print(-1)
        t=1
        break
if t==0:
    print(a)