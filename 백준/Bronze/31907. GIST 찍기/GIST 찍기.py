K=int(input())
L=[['G','.','.','.'],['.','I','.','T'],['.','.','S','.']]
for i in L:
  for j in range(K):
    for k in i:
      print(k*K,end='')
    print()