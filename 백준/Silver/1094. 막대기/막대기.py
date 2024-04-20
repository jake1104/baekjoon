x,a = int(input()),[64]
while sum(a)>x:
    a.sort()
    a[0]/=2
    if sum(a)<x:
        a.append(a[0])
print(len(a))