#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N,K;cin>>N>>K;
    vector<int>W(N),V(N);
    vector<int>dp(K+1,0);
    for(int i=0;i<N;i++)cin>>W[i]>>V[i];
    for(int i=0;i<N;i++)
        for(int w=K;w>=W[i];w--)
            dp[w]=max(dp[w],dp[w-W[i]]+V[i]);
    cout<<dp[K];
}