#include<stdio.h>
int main(){
    long N,M;scanf("%lld %lld",&N,&M);
    if(N>=M)printf("0");
    else{
        long long r=1;
        for(long long i=2;i<=N;i++){
            r*=i;
            r%=M;
        }
        printf("%lld",r);
    }
}