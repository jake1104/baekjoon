#include <stdio.h>
#include <math.h>
int M,N;
int W[2000][2000];
int O[2000][2000];
int main() {
    scanf("%d %d",&M,&N);
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++)scanf("%1d",&W[i][j]);
    }
    for(int i=0;i<M;i++)O[i][0]=W[i][0];
    int max=0;
    for(int j=1;j<N;j++){
        for(int i=0;i<M;i++){
            int m=0;
            if(i>0)m=m>O[i-1][j-1]?m:O[i-1][j-1];
            m=m>O[i][j-1]?m:O[i][j-1];
            if(i<M-1)m=m>O[i+1][j-1]?m:O[i+1][j-1];
            O[i][j]=m+W[i][j];
            max=max>m?max:m;
        }
    }
    printf("%d",max);
}