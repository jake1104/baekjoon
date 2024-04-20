N,K=map(int,input().split())
q=N-K*(K+1)//2
if q<0:
    print(-1)
else:
    if q%K==0:
        print(K-1)
    else:
        print(K)