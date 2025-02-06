l=list(map(int,input().split()))
if l==list(range(1,9)): print("ascending")
elif l==list(range(8,0,-1)): print("descending")
else: print("mixed")