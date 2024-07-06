import math
X=int(input())
# 분모: 1 2  1  1 2 3 4  3 2 1   1 2 3 4 5
# 분모: 1 2 1  1 2 3 4 3 2 1  1 2 3 4 5
#        3          7                 1 1
# 분모

# 분자: 1  1 2  3 2 1  1 2 3 4  5 4 3 2 1
# 분자: 1  1 2 3 2 1  1 2 3 4 5 4 3 2 1
#      1      5              9
# 분자

# 10, n=4
# n(n+1)/2=10
# n=-1/2 +- math.sqrt(1/4+20)
# n=-1/2 +- 9/2
# n=-3 or 4, n>0 => n=4

# n(n+1)/2+k=X
# n=-1/2+math.sqrt(1/4+2X)
n=math.ceil(-0.5+math.sqrt(1/4+2*X))
k=int(n*(n+1)/2-X)
updown=n%2
mother=n-k if updown==1 else k+1
son=n-k if updown==0 else k+1
print(f"{son}/{mother}")
