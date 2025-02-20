#include<stdio.h>
int main(){
    int N;scanf("%d",&N);
    int I[100][100],m=2147483647;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&I[i][j]);
            m=m<I[i][j]?m:I[i][j];
        }
    }
    while(I[0][0]!=m){
        int t[100][100];
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++)t[i][j]=I[j][N-i-1];
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++)I[i][j]=t[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)printf("%d ",I[i][j]);
        printf("\n");
    }
}