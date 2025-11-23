#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
vector<ll>Tm,TM,A;
ll initm(ll s,ll e,ll n){
    if(s==e)return Tm[n]=A[s];
    ll m=(s+e)/2;
    return Tm[n]=min(initm(s,m,n*2),initm(m+1,e,n*2+1));
}ll initM(ll s,ll e,ll n){
    if(s==e)return TM[n]=A[s];
    ll m=(s+e)/2;
    return TM[n]=max(initM(s,m,n*2),initM(m+1,e,n*2+1));
}ll getm(ll s,ll e,ll n,ll l,ll r){
    if(r<s||e<l)return 1000000001;
    if(l<=s&&e<=r)return Tm[n];
    ll m=(s+e)/2;
    return min(getm(s,m,n*2,l,r),getm(m+1,e,n*2+1,l,r));
}ll getM(ll s,ll e,ll n,ll l,ll r){
    if(r<s||e<l)return 0;
    if(l<=s&&e<=r)return TM[n];
    ll m=(s+e)/2;
    return max(getM(s,m,n*2,l,r),getM(m+1,e,n*2+1,l,r));
}int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll N,M;cin>>N>>M;Tm=vector<ll>(N*4+10);TM=vector<ll>(N*4+10);A=vector<ll>(N+1);
    for(ll i=1;i<=N;i++)cin>>A[i];
    initm(1,N,1);initM(1,N,1);for(ll i=0;i<M;i++){
        ll a,b;cin>>a>>b;
        cout<<getm(1,N,1,a,b)<<' '<<getM(1,N,1,a,b)<<'\n';
    }
}