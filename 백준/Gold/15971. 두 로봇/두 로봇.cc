#include<iostream>
#include<queue>
using namespace std;
struct l{int t,d;};
l ds[100001];
l ls[100001][100];int n[100001];
int main(){
    int N,a,b;cin>>N>>a>>b;
    for(int i=1;i<=N;i++)n[i]=0;
    for(int i=1;i<N;i++){
        int x,y,d;cin>>x>>y>>d;
        ls[x][n[x]++]={y,d};
        ls[y][n[y]++]={x,d};
    }
    for(int i=1;i<=N;i++)ds[i]={-1,-1};
    ds[a]={0,0};
    queue<int>q;q.push(a);
    bool v[100001]={};
    while(!q.empty()){
        int tn=q.front();q.pop();
        v[tn]=1;
        for(int i=0;i<n[tn];i++){
            l tl=ls[tn][i];
            int tt=tl.t;
            if(!v[tt]){
                v[tt]=1;
                int t=ds[tn].t+tl.d;
                if(ds[tt].t==-1)ds[tt]={t,ds[tn].d>tl.d?ds[tn].d:tl.d};
                q.push(tt);
            }
        }
    }cout<<ds[b].t-ds[b].d;
}