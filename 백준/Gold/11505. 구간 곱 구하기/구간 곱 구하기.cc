#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
const ll MOD=1000000007;
vector<ll>T,A;
ll init(ll s,ll e,ll n){
    if(s==e)return T[n]=A[s];
    ll m=(s+e)/2;
    return T[n]=(init(s,m,n*2)*init(m+1,e,n*2+1))%MOD;
}ll get(ll s,ll e,ll n,ll l,ll r){
    if(r<s||e<l)return 1;
    if(l<=s&&e<=r)return T[n];
    ll m=(s+e)/2;
    return(get(s,m,n*2,l,r)*get(m+1,e,n*2+1,l,r))%MOD;
}void update(ll s,ll e,ll n,ll i,ll x){
    if(i<s||e<i)return;
    if(s==e){T[n]=x;return;}
    ll m=(s+e)/2;
    update(s,m,n*2,i,x);
    update(m+1,e,n*2+1,i,x);
    T[n]=(T[n*2]*T[n*2+1])%MOD;
}int main(){
    ll N,M,K;cin>>N>>M>>K;T=vector<ll>(N*4+10),A=vector<ll>(N+1);
    for(ll i=1;i<=N;i++)cin>>A[i];
    init(1,N,1);ll C=M+K;while(C--){
        ll a,b,c;cin>>a>>b>>c;
        if(a-1)cout<<get(1,N,1,b,c)<<endl;
        else update(1,N,1,b,c);
    }
}