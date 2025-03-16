#include<stdio.h>
int main(){
    int N,r,c;scanf("%d %d %d",&N,&r,&c);
    int n=1;
    for(int i=0;i<N;i++)n*=2;
    int s=0;
    while(n!=1){
        if(r>=n/2){r-=n/2;s+=n*n/2;}
        if(c>=n/2){c-=n/2;s+=n*n/4;}
        n/=2;
    }
    printf("%d",s);
}