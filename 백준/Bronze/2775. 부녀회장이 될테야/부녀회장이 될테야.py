T=int(input())
I=[]
for i in range(T):
    I.append([])
    for _ in range(2):
        I[i].append(int(input()))
L=[[]]
for i in range(14):
    L[0].append(i+1)
max_k=0
for i in I:
    max_k=max(max_k,i[0])
for i in range(max_k):
    L.append([])
    for j in range(14):
        L[i+1].append(sum(L[i][:j+1]))
for i in I:
    print(L[i[0]][i[1]-1])