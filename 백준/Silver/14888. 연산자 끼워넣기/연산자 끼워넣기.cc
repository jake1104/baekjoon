#include<stdio.h>
int N,A[11],I[4],M,m;
void f(int n,int d){
    if(d==N){
        M=M>n?M:n;
        m=m<n?m:n;
    }
    for(int i=0;i<4;i++){
        if(I[i]>0){
            I[i]--;
            if(i==0)f(n+A[d],d+1);
            if(i==1)f(n-A[d],d+1);
            if(i==2)f(n*A[d],d+1);
            if(i==3)f(n/A[d],d+1);
            I[i]++;
        }
    }
}
int main(){
    scanf("%d",&N);
    for(int i=0;i<N;i++)scanf("%d",&A[i]);
    for(int i=0;i<4;i++)scanf("%d",&I[i]);
    M=-1000000000;
    m=1000000000;
    f(A[0],1);
    printf("%d\n%d",M,m);
}