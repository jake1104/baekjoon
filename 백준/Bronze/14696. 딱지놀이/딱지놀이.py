n=int(input())
w=[]
for _ in range(n):
    A=list(map(int,input().split()))
    A.remove(A[0])
    B=list(map(int,input().split()))
    B.remove(B[0])
    if A.count(4)==B.count(4):
        if A.count(3)==B.count(3):
            if A.count(2)==B.count(2):
                if A.count(1)==B.count(1):
                    w.append('D')
                elif A.count(1)>B.count(1):
                    w.append('A')
                else:
                    w.append('B')
            elif A.count(2)>B.count(2):
                w.append('A')
            else:
                w.append('B')
        elif A.count(3)>B.count(3):
            w.append('A')
        else:
            w.append('B')
    elif A.count(4)>B.count(4):
        w.append('A')
    else:
        w.append('B')
for i in w:
    print(i)