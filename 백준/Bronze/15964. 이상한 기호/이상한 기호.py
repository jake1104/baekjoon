import sys
print((lambda l:(l[0]+l[1])*(l[0]-l[1]))(list(map(int,sys.stdin.readline().split()))))