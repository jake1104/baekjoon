#include<stdio.h>
#include<algorithm>
using namespace std;
struct p{short a;char n[101];};
bool f(p x,p y){
    return x.a<y.a;
}
int main(){
    int N;scanf("%d",&N);
    p I[N];
    for(int i=0;i<N;i++)scanf("%hu %s",&I[i].a,I[i].n);
    stable_sort(I,I+N,f);
    for(int i=0;i<N;i++){
        printf("%hu %s\n",I[i].a,I[i].n);
    }
}