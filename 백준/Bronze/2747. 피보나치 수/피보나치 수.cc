#include<iostream>
using namespace std;
int dp[46];
int fibo(int n){
    if(dp[n]!=-1)return dp[n];
    dp[n]=fibo(n-1)+fibo(n-2);
    return dp[n];
}
int main(){
    int n;cin>>n;
    for(int i=0;i<46;i++)dp[i]=-1;
    dp[0]=0;dp[1]=1;
    cout<<fibo(n);
}