#include<stdio.h>
long long L[100];
long long f(long long n){
    if(L[n]!=0)return L[n];
    else{
        L[n]=f(n-1)+f(n-2);
        return L[n];
    }
}
int main(){
    long long N;scanf("%lld",&N);
    for(long long i=0;i<N;i++)L[i]=0;
    L[1]=1;L[2]=1;
    printf("%lld",f(N)*2+f(N+1)*2);
}