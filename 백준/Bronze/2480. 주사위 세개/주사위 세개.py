L=list(map(int,input().split()))
a,b,c=L[0],L[1],L[2]
print(10000+a*1000 if a==b==c else  1000+a*100 if a==b or a==c else 1000+b*100 if b==c else max(L)*100)