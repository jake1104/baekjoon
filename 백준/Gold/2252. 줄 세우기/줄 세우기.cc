#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int N,M;cin>>N>>M;
    vector<vector<int>>g(N+1);
    vector<int> indeg(N+1,0);
    for(int i=0;i<M;i++){
        int a,b;cin>>a>>b;
        g[a].push_back(b);
        indeg[b]++;
    }queue<int>q;
    for(int i=1;i<=N;i++)if(!indeg[i])q.push(i);
    vector<int>r;
    while(!q.empty()){
        int now=q.front();
        q.pop();
        r.push_back(now);
        for(int nxt:g[now]){
            indeg[nxt]--;
            if(!indeg[nxt])q.push(nxt);
        }
    }for(int x:r) cout << x << ' ';
}