N=int(input())
Ns=list(map(int, input().split()))
M=int(input())
Ms=list(map(int, input().split()))
dic = dict()
for i in Ns:
  dic[i] = 1
print(*[(1 if dic.get(i) != None else 0) for i in Ms])