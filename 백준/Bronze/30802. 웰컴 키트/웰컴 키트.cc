#include<stdio.h>
int main(){
    int N;scanf("%d",&N);
    int I[6];for(int i=0;i<6;i++)scanf("%d",&I[i]);
    int T,P;scanf("%d %d",&T,&P);
    int r=0;
    for(int i=0;i<6;i++)r+=I[i]/T+(I[i]%T>0?1:0);
    printf("%d\n%d %d",r,N/P,N%P);
}