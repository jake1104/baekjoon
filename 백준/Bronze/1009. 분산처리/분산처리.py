T=int(input())
L=[list(map(int,input().split())) for _ in range(T)]
num_power_firstnum=[[10],[1],[2,4,8,6],[3,9,7,1],[4,6],[5],[6],[7,9,3,1],[8,4,2,6],[9,1]]
for i in L:
  i[0]=int(str(i[0])[-1])
  print(num_power_firstnum[i[0]][i[1]%len(num_power_firstnum[i[0]])-1])