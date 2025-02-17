#include<stdio.h>
int main(){
    long K,N;scanf("%ld %ld",&K,&N);
    long I[10000];
    long s=1,e=0;
    for(long i=0;i<K;i++){scanf("%ld",&I[i]);e=e>I[i]?e:I[i];}
    while(e>=s){
        long m=(e+s)/2,l=0;
        for(long i=0;i<K;i++)l+=I[i]/m;
        if(N>l)e=m-1;
        else s=m+1;
    }
    printf("%ld",e);
}