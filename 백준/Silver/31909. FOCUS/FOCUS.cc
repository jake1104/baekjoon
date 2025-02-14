#include<stdio.h>
int main(){
    int N;scanf("%d",&N);
    int k[8];
    for(int i=0;i<8;i++)k[i]=i;
    for(int i=0;i<N;i++){
        int a;scanf("%d",&a);
        int x=-1,y=-1;
        int c=0;
        for(int i=0;i<8;i++){
            if(a%2==1){
                if(c==0){x=i;c++;}
                else if(c==1){y=i;c++;}
                else{x=-1;y=-1;}
            }
            a/=2;
        }
        if(!(x==-1||y==-1)){
            int t=k[x];
            k[x]=k[y];
            k[y]=t;
        }
    }
    int K;scanf("%d",&K);
    printf("%d",k[K]);
}