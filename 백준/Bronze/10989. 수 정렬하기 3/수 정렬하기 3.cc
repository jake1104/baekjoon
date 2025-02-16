#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int N;scanf("%d",&N);
    int I[10001];for(int i=1;i<=10000;i++)I[i]=0;
    for(int i=0;i<N;i++){int t;scanf("%d",&t);I[t]++;}
    for(int i=1;i<=10000;i++){
        if(I[i]>0){
            for(int j=0;j<I[i];j++)printf("%d\n",i);
        }
    }
}