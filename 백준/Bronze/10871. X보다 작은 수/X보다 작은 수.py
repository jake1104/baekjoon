import sys
N,X=map(int,sys.stdin.readline().split())
print(*[i for i in map(int,sys.stdin.readline().split()) if i<X])