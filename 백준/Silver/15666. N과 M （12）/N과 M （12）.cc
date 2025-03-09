#include<stdio.h>
#include<algorithm>
using namespace std;
int N,M;
int idx;
int I[8];
int a[8];
void f(int li,int d){
    if(d==M){
        for(int i=0;i<M;i++)printf("%d ",a[i]);
        printf("\n");
        return;
    }
    for(int i=li;i<=idx;i++){
        a[d]=I[i];
        f(i,d+1);
    }
}
int main(){
    scanf("%d %d",&N,&M);
    int inp[8];
    for(int i=0;i<N;i++)scanf("%d",&inp[i]);
    sort(inp,inp+N);
    idx=0;
    I[0]=inp[0];
    for(int i=1;i<N;i++){
        if(I[idx]!=inp[i]){
            idx++;
            I[idx]=inp[i];
        }
    }
    f(0,0);
}