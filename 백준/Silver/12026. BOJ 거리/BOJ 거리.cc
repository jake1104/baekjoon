#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int INF=1e9;
int main(){
    int N;cin>>N;
    string s;cin>>s;
    vector<vector<int>>dp(N,vector<int>(3,INF));
    if(s[0]=='B')dp[0][0]=0;
    for(int i=0;i<N;i++){
        for(int k=0;k<3;k++){
            if(dp[i][k]==INF)continue;
            for(int j=i+1;j<N;++j){
                int next_k=(k+1)%3;
                if(s[j]=="BOJ"[next_k]){
                    int c=(j-i)*(j-i);
                    dp[j][next_k]=min(dp[j][next_k],dp[i][k]+c);
                }
            }
        }
    }
    int res=min({dp[N-1][0],dp[N-1][1],dp[N-1][2]});
    cout<<(res==INF?-1:res);
}