nA,nB=map(int, input().split())
A=set(map(int, input().split()))
B=set(map(int, input().split()))
AsB=A-(A&B)
print(len(AsB))
print(*sorted(AsB))