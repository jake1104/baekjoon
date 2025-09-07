#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
using namespace std;
struct p{int n,d;};
struct f{bool operator()(p a,p b){return a.d>b.d;}};
int main(){
    int V,E,K;cin>>V>>E>>K;
    vector<p>g[V+1];
    for(int i=0;i<E;i++){
        int u,v,w;cin>>u>>v>>w;
        bool c=0;
        for(int j=0;j<g[u].size();j++){
            if(g[u][j].n==v){
                c=1;
                g[u][j].d=g[u][j].d<w?g[u][j].d:w;
            }
        }if(!c)g[u].push_back({v,w});
    }int d[V+1];memset(d,-1,sizeof(d));
    priority_queue<p,vector<p>,f>q;
    d[K]=0;q.push({K,0});while(!q.empty()){
        p t=q.top();q.pop();
        if(d[t.n]!=-1&&t.d>d[t.n])continue;
        for(int i=0;i<g[t.n].size();i++){
            int nd=t.d+g[t.n][i].d;
            if(d[g[t.n][i].n]==-1||nd<d[g[t.n][i].n]){
                d[g[t.n][i].n]=nd;
                q.push({g[t.n][i].n,nd});
            }
        }
    }for(int i=1;i<=V;i++){
        if(d[i]==-1)cout<<"INF\n";
        else cout<<d[i]<<'\n';
    }
}