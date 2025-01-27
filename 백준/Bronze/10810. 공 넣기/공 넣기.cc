#include <stdio.h>
int main() {
    int N,M;
    scanf("%d %d",&N,&M);
    int i[100],j[100],k[100];
    int b[1001];
    for(int x=0;x<N;x++){b[x]=0;}
    for(int x=0;x<M;x++){scanf("%d %d %d",&i[x],&j[x],&k[x]);for(int y=i[x];y<=j[x];y++){b[y]=k[x];}}
    for(int x=1;x<=N;x++){printf("%d ",b[x]);}
}