#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string A,B;
    cin>>A>>B;
    int a=A.size(),b=B.size();
    vector<vector<int>>dp(a+1,vector<int>(b+1));
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(A[i-1]==B[j-1]) dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }int i=a,j=b;
    string ans="";
    while(i>0&&j>0){
        if(A[i-1]==B[j-1]){
            ans.push_back(A[i-1]);
            i--;j--;
        }else if(dp[i-1][j]>=dp[i][j-1]) i--;
        else j--;
    }reverse(ans.begin(),ans.end());
    cout<<dp[a][b]<<'\n'<<ans;
}