a=input()
while a!="0":
    print("yes" if a==a[::-1] else "no")
    a=input()