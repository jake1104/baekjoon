#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct g{int A,B;};
bool f(g x,g y){return x.A<y.A;}
int main(){
    int n;cin>>n;
    vector<g>J(n);for(int i=0;i<n;i++)cin>>J[i].A>>J[i].B;
    sort(J.begin(),J.end(),f);vector<int>s(n),dp(n);
    for(int i=0;i<n;i++)s[i]=J[i].B;
    int M=0;for(int i=0;i<n;i++){
        dp[i]=1;
        for(int j=0;j<i;j++)
            if(s[i]>s[j]&&dp[i]<dp[j]+1)
                dp[i]=dp[j]+1;
        M=M>dp[i]?M:dp[i];
    }cout<<n-M;
}