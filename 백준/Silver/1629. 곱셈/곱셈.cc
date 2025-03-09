#include<stdio.h>
int f(int A,int B,int C){
    if(B==1)return A%C;
    long t=f(A,B/2,C) % C;
    if(B%2==0)return(t*t)%C;
    return(t*(f(A,B/2+B%2,C)%C))%C;
}
int main(){
    int A,B,C;scanf("%d %d %d",&A,&B,&C);
    int n=f(A,B,C);
    printf("%d",n);
}