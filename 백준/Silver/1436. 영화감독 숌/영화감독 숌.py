N=int(input())
def check_input(num):
  for i in range(len(str(num))-2):
    if str(num)[i]==str(num)[i+1]==str(num)[i+2]=="6":
      return True
  return False
check_num=665
nums=[]
while len(nums)!=N:
  check_num+=1
  if check_input(check_num):
    nums.append(check_num)
print(nums[N-1])