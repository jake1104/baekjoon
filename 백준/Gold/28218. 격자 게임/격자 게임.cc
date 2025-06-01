#include<iostream>
using namespace std;
int N,M,K;
int map[300][300];
int dp[300][300];
bool f(int x,int y){
    if(dp[x][y]!=-1)return dp[x][y];
    if(x==N-1&&!map[x][y+1])return dp[x][y]=!f(x,y+1);
    if(y==M-1&&!map[x+1][y])return dp[x][y]=!f(x+1,y);
    dp[x][y]=1;
    if(!map[x+1][y])dp[x][y]=!f(x+1,y)&dp[x][y];
    if(!map[x][y+1])dp[x][y]=!f(x,y+1)&dp[x][y];
    for(int k=1;k<=K&&x+k<N&&y+k<M;k++){
        int rx=x+k,ry=y+k;
        if(!map[rx][ry])dp[x][y]=!f(rx,ry)&dp[x][y];
    }
    return dp[x][y];
}
int main(){
    cin>>N>>M>>K;
    string m[N];for(int i=0;i<N;i++)cin>>m[i];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            map[i][j]=m[i][j]=='#';
            dp[i][j]=-1;
        }
    }
    dp[N-1][M-1]=1;
    int Q;cin>>Q;
    while(Q--){
        int x,y;cin>>x>>y;x--,y--;
        cout<<(f(x,y)?"Second":"First")<<endl;
    }
}