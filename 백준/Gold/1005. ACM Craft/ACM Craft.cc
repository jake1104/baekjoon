#include<iostream>
#include<vector>
using namespace std;
int N,K;vector<int>D,dp;vector<vector<int>>XY;
int f(int w){
    if(dp[w]+1)return dp[w];
    int m=0;
    for(int i:XY[w]){
        int t=f(i);
        m=t>m?t:m;
    }return dp[w]=m+D[w];
}int main(){
    int T;cin>>T;while(T--){
        cin>>N>>K;
        D=vector<int>(N+1);for(int i=1;i<=N;i++)cin>>D[i];
        XY=vector<vector<int>>(N+1);
        while(K--){
            int X,Y;cin>>X>>Y;
            XY[Y].push_back(X);
        }dp=vector<int>(N+1,-1);
        int W;cin>>W;cout<<f(W)<<endl;
    }
}