N,B=input().split()
B=int(B)
N=reversed(N)
t,s=1,0
for i in N:
    if ord(i)>=ord('A'):
        s+=t*(ord(i)-ord('A')+10)
    else:
        s+=t*int(i)
    t*=B
print(s)