#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
const ll M=1000000007;
vector<vector<ll>>mul(vector<vector<ll>>a,vector<vector<ll>>b){
    vector<vector<ll>>r(2,vector<ll>(2,0));
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            for(int k=0;k<2;k++)
                r[i][j]=(r[i][j]+a[i][k]*b[k][j])%M;
    return r;
}vector<vector<ll>>pow(vector<vector<ll>>b,ll e){
    vector<vector<ll>>r={{1,0},{0,1}};
    while(e>0){
        if(e%2)r=mul(r,b);
        b=mul(b,b);e/=2;
    }return r;
}ll fibo(ll n){
    if(n<2)return n;
    vector<vector<ll>>B={{1,1},{1,0}};
    return pow(B,n-1)[0][0];
}int main(){
    ll n;cin>>n;
    cout<<fibo(n);
}