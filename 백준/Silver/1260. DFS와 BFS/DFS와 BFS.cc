#include<stdio.h>
#include<algorithm>
#include<queue>
using namespace std;
int N,M,V;
int I[1001][10000];
int L[1001];
int v[1001];
void f(int n){
    if(!v[n]){
        v[n]=true;
        printf("%d ",n);
        for(int i=0;i<L[n];i++)f(I[n][i]);
    }
}
int main(){
    scanf("%d %d %d",&N,&M,&V);
    for(int i=1;i<=N;i++){L[i]=0;v[i]=false;}
    for(int i=0;i<M;i++){
        int a,b;scanf("%d %d",&a,&b);
        I[a][L[a]]=b;
        L[a]++;
        I[b][L[b]]=a;
        L[b]++;
    }
    for(int i=1;i<=N;i++)sort(I[i],I[i]+L[i]);
    f(V);printf("\n");
    queue<int> q;
    for(int i=1;i<=N;i++)v[i]=false;
    q.push(V);v[V]=true;
    while(!q.empty()){
        for(int i=0;i<L[q.front()];i++){
            if(!v[I[q.front()][i]]){
                v[I[q.front()][i]]=true;
                q.push(I[q.front()][i]);
            }
        }
        printf("%d ",q.front());
        q.pop();
    }
}