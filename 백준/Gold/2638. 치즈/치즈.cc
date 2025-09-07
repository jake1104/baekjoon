#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int N,M;
vector<vector<int>>g;
vector<vector<bool>>v;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
void f(vector<vector<bool>>&o){
    queue<pair<int,int>>q;
    v.assign(N,vector<bool>(M,0));
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)
        if((i==0||i==N-1||j==0||j==M-1)&&g[i][j]==0)
            q.push({i,j}),v[i][j]=1,o[i][j]=1;
    while(!q.empty()){
        int x=q.front().first,y=q.front().second;q.pop();
        for(int d=0;d<4;d++){
            int nx=x+dx[d],ny=y+dy[d];
            if(nx>=0&&nx<N&&ny>=0&&ny<M&&!v[nx][ny]&&g[nx][ny]==0)
                v[nx][ny]=1,o[nx][ny]=1,q.push({nx,ny});
        }
    }
}int main(){
    cin>>N>>M;
    g.assign(N,vector<int>(M));
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)cin>>g[i][j];
    int t=0;while(1){
        bool c=0;
        for(int i=0;i<N&&!c;i++)for(int j=0;j<M&&!c;j++)if(g[i][j]==1)c=1;
        if(!c)break;
        t++;
        vector<vector<bool>>o(N,vector<bool>(M,0));
        f(o);
        vector<pair<int,int>>tm;
        for(int i=0;i<N;i++)for(int j=0;j<M;j++)if(g[i][j]==1){
            int e=0;
            for(int d=0;d<4;d++){
                int ni=i+dx[d],nj=j+dy[d];
                if(ni>=0&&ni<N&&nj>=0&&nj<M&&o[ni][nj])e++;
            }
            if(e>=2)tm.push_back({i,j});
        }for(auto&p:tm)g[p.first][p.second]=0;
    }cout<<t;
}