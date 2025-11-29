#include<stdio.h>
#include<bitset>
short N,A[51];std::bitset<51>D,L;
void k(short a){
    D[a]=0;L[a]=0;for(short i=0;i<N;i++)
        if(A[i]==a)k(i);
}int main(){
    scanf("%hd",&N);for(short i=0;i<N;i++)scanf("%hd",&A[i]);
    D.set();L.set();
    short I;scanf("%hd",&I);k(I);
    for(short i=0;i<N;i++)
        if(A[i]!=-1&&D[i])L[A[i]]=0;
    printf("%lu",L.count()-51+N);
}