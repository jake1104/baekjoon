#include<stdio.h>
int main(){
    int T;scanf("%d",&T);
    for(int i=0;i<T;i++){
        int H,W,N;
        scanf("%d %d %d",&H,&W,&N);
        int f=N%H,r=N/H+1;
        if(f==0){r--;f=H;}
        printf("%d\n",f*100+r);
    }
}