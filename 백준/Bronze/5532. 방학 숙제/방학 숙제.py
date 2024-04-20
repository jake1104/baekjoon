import math
L=int(input())
A=int(input())
B=int(input())
C=int(input())
D=int(input())
l=A//C if A%C==0 else (A//C)+1
m=B//D if B%D==0 else (B//D)+1
n=max(l,m)
print(L-n)