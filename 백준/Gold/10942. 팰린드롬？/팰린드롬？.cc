#include<iostream>
#include<vector>
using namespace std;
vector<int>A;
vector<vector<int>>dp;
int f(int S,int E){
    if(dp[S][E]!=-1)return dp[S][E];
    int m=(S+E)/2;
    int s=m,e=m+((S+E)&1);bool c=1;
    while(1){
        if(s<0||e>=A.size())break;
        if(A[s]==A[e]&&c)dp[s][e]=1;
        else{c=0;dp[s][e]=0;}
        s--,e++;
    }return dp[S][E];
}int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int N;cin>>N;
    for(int i=0;i<N;i++){
        int t;cin>>t;A.push_back(t);
        dp.push_back(vector<int>(N,-1));
        dp[i][i]=1;
    }int M;cin>>M;while(M--){
        int S,E;cin>>S>>E;
        cout<<f(S-1,E-1)<<'\n';
    }
}