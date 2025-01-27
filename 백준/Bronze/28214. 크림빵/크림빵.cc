#include <stdio.h>

int main() {
    int N,K,P;
    scanf("%d %d %d",&N,&K,&P);
    int t,c=0;
    for(int i=0;i<N*K;i++){scanf("%d",&t);c+=t;}
    printf("%d",c/(K-P+1));
}