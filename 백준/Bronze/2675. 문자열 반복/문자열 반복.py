T=int(input())
for _ in [0]*T:
    R,S=input().split();R=int(R)
    for i in range(len(S)): print(S[i]*R,end="");
    print()