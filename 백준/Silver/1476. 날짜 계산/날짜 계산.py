import sys
E,S,M=map(int, sys.stdin.readline().split())
tE=tS=tM=ty=0
while tE!=E or tS!=S or tM!=M:
  tE+=1
  tS+=1
  tM+=1
  ty+=1
  tE=1 if tE==16 else tE
  tS=1 if tS==29 else tS
  tM=1 if tM==20 else tM
print(ty)