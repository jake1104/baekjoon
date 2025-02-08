#include<stdio.h>
int main(){
    int N;scanf("%d",&N);
    int V[500001];V[N]=0;for(int i=0;i<N;i++)scanf("%d",&V[i]);
    int S=0;
    for(int i=0;i<=N;i++){
        int M=500001;
        for(int j=0;j<=N-i;j++)M=M<V[i+j]+j?M:V[i+j]+j;
        S+=M;
    }
    printf("%d",S);
}