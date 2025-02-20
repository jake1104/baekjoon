#include<stdio.h>
int main(){
    int N,T1,T2,T3;
    while(true){
        scanf("%d %d %d %d",&N,&T1,&T2,&T3);
        if(N==0&&T1==0&&T2==0&&T3==0)break;
        printf("%d\n",4*N+(T2-T1+N)%N+(T2-T3+N)%N-1);
    }
}