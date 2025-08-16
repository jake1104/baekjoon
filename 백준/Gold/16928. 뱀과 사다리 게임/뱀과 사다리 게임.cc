#include<iostream>
#include<queue>
#include<vector>
using namespace std;
struct p{int l;int d;};
int main(){
    int N,M;cin>>N>>M;
    vector<int>W[100];for(int i=0;i<100;i++){for(int j=1;j<=6;j++)W[i].push_back(i+j);}
    for(int i=0;i<N;i++){
        int x,y;cin>>x>>y;W[x-1].clear();W[x-1].push_back(y-1);
    }for(int i=0;i<M;i++){
        int u,v;cin>>u>>v;W[u-1].clear();W[u-1].push_back(v-1);
    }int m[100];for(int i=0;i<100;i++)m[i]=-1;
    queue<p>q;q.push({0,0});while(!q.empty()&&m[99]==-1){
        p t=q.front();q.pop();m[t.l]=t.d;
        for(int i=0;i<W[t.l].size();i++){
            p r={W[t.l][i],t.d+1};
            while(W[r.l].size()==1)r.l=W[r.l][0];
            if(r.l>99)r.l=99;
            if(m[r.l]!=-1&&m[r.l]<r.d)continue;
            q.push(r);
        }
    }cout<<m[99];
}