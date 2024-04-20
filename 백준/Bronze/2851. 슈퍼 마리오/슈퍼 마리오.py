L=list()
S=0
for i in range(10):
    S+=int(input())
    L.append(S)
S=100
N=0
for i in range(10):
    if abs(L[i]-100)<=S:
        N=i
        S=abs(L[i]-100)
print(L[N])