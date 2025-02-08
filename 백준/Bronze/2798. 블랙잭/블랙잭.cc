#include<stdio.h>
int main(){
    int N,M;scanf("%d %d",&N,&M);
    int I[100];
    for(int i=0;i<N;i++)scanf("%d",&I[i]);
    int r=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                if(i!=j&&j!=k&&k!=i){
                    int t=I[i]+I[j]+I[k];
                    if(t<=M)r=r>t?r:t;
                }
            }
        }
    }
    printf("%d",r);
}