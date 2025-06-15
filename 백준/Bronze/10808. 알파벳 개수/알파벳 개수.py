a=list(input())
c=[0]*26
for i in a:c[ord(i)-ord('a')]+=1
print(*c)