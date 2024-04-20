N=int(input())
t1=[list(map(int,input().split())) for _ in range(N)]
t2=[list(map(int,input().split())) for _ in range(N)]
def reverse_t(old_t):
  new_t=[list(range(i+1)) for i in range(len(old_t))]
  for i in range(len(new_t)):
    for j in range(len(new_t[i])):
      new_t[i][len(new_t[i])-j-1]=old_t[i][j]
  return new_t
def rotate_t(old_t):
  new_t=reverse_t(old_t)
  reversed_old_t=reverse_t(old_t)
  for i in range(len(reversed_old_t)):
    for j in range(len(reversed_old_t[i])):
      new_t[len(reversed_old_t)-i+j-1][j]=reversed_old_t[i][j]
  return new_t
new_t1=t1
min_difference=int(N*N/2+1)
difference=0
for i in range(3):
  for j in range(2):
    for k in range(N):
      for l in range(k+1):
        difference+=abs(new_t1[k][l]-t2[k][l])
    min_difference=min(min_difference,difference)
    difference=0
    new_t1=reverse_t(new_t1)
  new_t1=rotate_t(new_t1)
print(min_difference)