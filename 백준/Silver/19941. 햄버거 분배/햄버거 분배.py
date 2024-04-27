N,K=map(int,input().split())
L=list(input())
for i in range(N):
  if L[i]=='P':
    if 'H' in L[max(i-K,0):i]:
      L[L[max(i-K,0):i].index('H')+max(i-K,0)]='h'
      L[i]='p'
    elif 'H' in L[i+1:i+K+1]:
      L[L[i+1:i+K+1].index('H')+(i+1)]='h'
      L[i]='p'
print(L.count('p'))