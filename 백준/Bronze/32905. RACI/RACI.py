n,m=map(int,input().split())
c=[input().split().count('A')==1 for i in[0]*n]
C=True
for i in c:C=C and i
if C:print("Yes")
else:print("No")