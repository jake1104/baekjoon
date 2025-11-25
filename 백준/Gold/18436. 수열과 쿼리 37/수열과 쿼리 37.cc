#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
vector<ll>T,A;
ll init(ll s,ll e,ll n){
    if(s==e)return T[n]=A[s]&1;
    ll m=(s+e)/2;
    return T[n]=init(s,m,n*2)+init(m+1,e,n*2+1);
}ll get(ll s,ll e,ll n,ll l,ll r){
    if(r<s||e<l)return 0;
    if(l<=s&&e<=r)return T[n];
    ll m=(s+e)/2;
    return get(s,m,n*2,l,r)+get(m+1,e,n*2+1,l,r);
}void update(ll s,ll e,ll n,ll i,ll x){
    if(i<s||e<i)return;
    if(s==e){T[n]=x;return;}
    ll m=(s+e)/2;
    update(s,m,n*2,i,x);
    update(m+1,e,n*2+1,i,x);
    T[n]=T[n*2]+T[n*2+1];
}int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    ll N;cin>>N;T=vector<ll>(N*4+10),A=vector<ll>(N+1);
    for(ll i=1;i<=N;i++)cin>>A[i];
    init(1,N,1);ll M;cin>>M;while(M--){
        ll a,b,c;cin>>a>>b>>c;
        if(a==1)update(1,N,1,b,c&1);
        else if(a==2)cout<<(c-b+1)-get(1,N,1,b,c)<<'\n';
        else if(a==3)cout<<get(1,N,1,b,c)<<'\n';
    }
}