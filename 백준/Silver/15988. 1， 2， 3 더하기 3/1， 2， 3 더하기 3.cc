#include<iostream>
using namespace std;
#define MOD 1000000009
typedef long long ll;
ll dp[1000001]={0,};
ll f(int n){
    if(dp[n])return dp[n];
    return dp[n]=(f(n-1)+f(n-2)+f(n-3))%MOD;
}
int main(){
    int T;cin>>T;
    int I[T],M;for(int i=0;i<T;i++){cin>>I[i];M=M>I[i]?M:I[i];}
    dp[1]=1;dp[2]=2;dp[3]=4;
    for(int i=0;i<T;i++)cout<<f(I[i])<<endl;
}