#include<stdio.h>
int N,M,G[1001][1000],L[1001];
int main(){
    int T;scanf("%d",&T);
    for(int t=0;t<T;t++){
        scanf("%d %d",&N,&M);
        for(int i=0;i<M;i++){int a,b;scanf("%d %d",&a,&b);}
        printf("%d\n",N-1);
    }
}