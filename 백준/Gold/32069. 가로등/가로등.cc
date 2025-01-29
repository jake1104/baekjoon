#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
    long long L, N, K;
    scanf("%lld %lld %lld",&L,&N,&K);
    long long A[300000];
    bool a[300000];
    long long LK=L+1>K?L+1:K;
    for(int i=0;i<LK;i++)a[i]=false;
    for(int i=0;i<N;i++){scanf("%lld",&A[i]);a[A[i]]=true;}
    long long S[300000];
    for(int i=0;i<LK;i++){
        S[i]=1000000000000000000;
        for(int j=0;j<=(i>LK-i-1?i:LK-i-1);j++){
            if(i-j>=0){if(a[i-j]){S[i]=j<S[i]?j:S[i];}}
            if(i+j<LK){if(a[i+j]){S[i]=j<S[i]?j:S[i];}}
        }
    }
    sort(S,S+LK);
    for(int i=0;i<K;i++)printf("%lld\n",S[i]);
}