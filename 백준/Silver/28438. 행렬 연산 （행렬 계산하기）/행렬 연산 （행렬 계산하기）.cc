#include<stdio.h>
int main(){
    int N,M,Q;scanf("%d %d %d",&N,&M,&Q);
    int R[N],C[M];
    for(int i=0;i<N;i++)R[i]=0;
    for(int i=0;i<M;i++)C[i]=0;
    for(int i=0;i<Q;i++){
        int m,a,b;scanf("%d %d %d",&m,&a,&b);
        if(m==1)R[a-1]+=b;
        else if(m==2)C[a-1]+=b;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++)printf("%d ",R[i]+C[j]);
        printf("\n");
    }
}