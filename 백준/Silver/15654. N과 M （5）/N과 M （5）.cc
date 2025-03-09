#include<stdio.h>
#include<algorithm>
using namespace std;
int N,M;
int I[8];
int a[8];
bool V[8];
void f(int l,int d){
    if(d==M){
        for(int i=0;i<M;i++)printf("%d ",a[i]);
        printf("\n");
        return;
    }
    for(int i=0;i<N;i++){
        if(!V[i]){
            V[i]=true;
            a[d]=I[i];
            f(I[i],d+1);
            V[i]=false;
        }
    }
}
int main(){
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){scanf("%d",&I[i]);V[i]=false;}
    sort(I,I+N);
    f(1,0);
}