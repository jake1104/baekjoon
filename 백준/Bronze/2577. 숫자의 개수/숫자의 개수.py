from functools import reduce
a=str(reduce(lambda x,y:x*y,[int(input()) for i in range(3)]))
for i in range(10):print(a.count(str(i)))