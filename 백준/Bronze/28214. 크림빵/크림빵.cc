#include <stdio.h>

int main() {
    int N,K,P;
    scanf("%d %d %d",&N,&K,&P);
    int t,c,r=0;
    for(int i=0;i<N;i++){c=0;for(int j=0;j<K;j++){scanf("%d",&t);c+=t;}if(c>=K-P+1){r++;}}
    printf("%d",r);
}