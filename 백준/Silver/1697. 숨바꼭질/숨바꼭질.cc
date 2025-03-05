#include<stdio.h>
#include<queue>
using namespace std;
struct a{int n,c;};
int main(){
    int N,K;scanf("%d %d",&N,&K);
    bool V[100001];for(int i=0;i<=100000;i++)V[i]=false;
    queue<a>q;
    q.push({N,0});
    int c=100000;
    while(!q.empty()){
        a t;t=q.front();
        if(t.n==K)c=c<t.c?c:t.c;
        V[t.n]=true;
        q.pop();
        if(t.n-1>=0&&!V[t.n-1])q.push({t.n-1,t.c+1});
        if(t.n+1<=100000&&!V[t.n+1])q.push({t.n+1,t.c+1});
        if(t.n*2<=100000&&!V[t.n*2])q.push({t.n*2,t.c+1});
    }
    printf("%d",c);
}