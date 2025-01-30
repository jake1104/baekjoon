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
            for(int a=0;a<M;a++){
                for(int b=0;b<j;b++){
                    if(abs(i-a)<=j-b&&b<j)m=m>O[a][b]?m:O[a][b];
                }
            }
            O[i][j]=m+W[i][j];
            max=max>m?max:m;
        }
    }
    printf("%d",max);
}