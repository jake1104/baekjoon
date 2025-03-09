#include<stdio.h>
int N,M;
int a[8];
void f(int l,int d){
    if(d==M){
        for(int i=0;i<M;i++)printf("%d ",a[i]);
        printf("\n");
        return;
    }
    for(int i=l;i<=N;i++){
        a[d]=i;
        f(i,d+1);
    }
}
int main(){
    scanf("%d %d",&N,&M);
    f(1,0);
}