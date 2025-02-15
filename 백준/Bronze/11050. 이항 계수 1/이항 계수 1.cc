#include<stdio.h>
int f(int n){
    int m=1;
    for(int i=1;i<=n;i++)m*=i;
    return m;
}
int main(){
    int N,K;scanf("%d %d",&N,&K);
    printf("%d",f(N)/(f(N-K)*f(K)));
}