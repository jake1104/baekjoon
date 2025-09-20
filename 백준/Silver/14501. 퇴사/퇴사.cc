#include<iostream>
using namespace std;
int main(){
    int N;cin>>N;
    int T[N+1],P[N+1];for(int i=1;i<=N;i++)cin>>T[i]>>P[i];
    int dp[N+1]={0,};
    for(int i=0;i<=N;i++){
        for(int j=0;j<i;j++){
            if(T[j+1]<=i-j){
                int t=dp[j]+P[j+1];
                dp[i]=dp[i]>t?dp[i]:t;
            }
        }
    }cout<<dp[N];
}