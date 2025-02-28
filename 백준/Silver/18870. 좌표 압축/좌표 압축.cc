#include <stdio.h>
#include <algorithm>
using namespace std;
#define M 1000000
int I[M],S[M],R[M];
int main(){
    int N;scanf("%d",&N);
    for (int i=0;i<N;i++){
        scanf("%d",&I[i]);
        S[i]=I[i];
    }
    sort(S,S+N);
    int u=0;
    for(int i=0;i<N;i++){
        if(i==0||S[i]!=S[i-1])R[i]=u++;
        else R[i]=R[i-1];
    }
    for (int i=0;i<N;i++){
        int idx=lower_bound(S,S+N,I[i])-S;
        printf("%d ",R[idx]);
    }
}