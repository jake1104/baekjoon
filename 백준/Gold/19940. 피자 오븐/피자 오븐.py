for _ in range(int(input())):
    n=int(input())
    b=[0]*5
    s,t,o=n//60,(n%60)//10,n%10
    if o>5:
        t+=1
        o-=10
    if t>3:
        s+=1
        t-=6
    if t<0 and o==5:
        t+=1
        o-=10
    b[0] = s
    b[2-(t>=0)]=abs(t)
    b[4-(o>=0)]=abs(o)
    print(*b)