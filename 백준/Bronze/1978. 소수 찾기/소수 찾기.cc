#include<stdio.h>
int main(){
    int N;scanf("%d",&N);
    int I[100];
    for(int i=0;i<N;i++)scanf("%d",&I[i]);
    int c=0;
    for(int i=0;i<N;i++){
        bool k=true;
        if(I[i]==1)k=false;
        for(int j=2;j<=I[i]/2;j++)if(I[i]%j==0)k=false;
        if(k)c++;
    }
    printf("%d",c);
}