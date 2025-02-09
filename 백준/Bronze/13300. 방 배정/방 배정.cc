#include<stdio.h>
int main(){
    int N,K;scanf("%d %d",&N,&K);
    int L[7][2];
    for(int i=1;i<=6;i++){L[i][0]=0;L[i][1]=0;}
    for(int i=0;i<N;i++){
        int S,Y;
        scanf("%d %d",&S,&Y);
        L[Y][S]++;
    }
    int r=0;
    for(int i=1;i<=6;i++){r+=L[i][0]/K+(L[i][0]%K>=1?1:0);r+=L[i][1]/K+(L[i][1]%K>=1?1:0);}
    printf("%d",r);
}