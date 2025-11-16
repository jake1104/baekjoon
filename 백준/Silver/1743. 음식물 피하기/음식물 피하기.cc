#include<iostream>
using namespace std;
int N,M,K;
bool**it,**V;
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int dfs(int x,int y){
    V[x][y]=1;int c=1;
    for(int i=0;i<4;i++){
        int rx=x+dx[i],ry=y+dy[i];
        if(0<=rx&&rx<N&&0<=ry&&ry<M)
            if(it[rx][ry]&&!V[rx][ry])c+=dfs(rx,ry);
    }return c;
}int main(){
    cin>>N>>M>>K;
    it=new bool*[N];V=new bool*[N];
    for(int i=0;i<N;i++)it[i]=new bool[M](),V[i]=new bool[M]();
    for(int i=0;i<K;i++){
        int r,c;cin>>r>>c;
        it[r-1][c-1]=1;
    }int m=0;for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(it[i][j]){
                int t=dfs(i,j);
                m=m>t?m:t;
            }
        }
    }cout<<m;
}