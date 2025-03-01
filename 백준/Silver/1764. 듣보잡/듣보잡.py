N,M=map(int,input().split())
h={input().strip()for _ in range(N)}
s={input().strip()for _ in range(M)}
hs=sorted(h&s)
print(len(hs))
print(*hs,sep="\n")