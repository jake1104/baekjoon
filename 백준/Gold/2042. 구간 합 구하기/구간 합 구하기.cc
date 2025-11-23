#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
vector<ll>T,A;
ll init(int s,int e,int n){
    if(s==e)return T[n]=A[s];
    int m=(s+e)/2;
    return T[n]=init(s,m,n*2)+init(m+1,e,n*2+1);
}void change(int s,int e,int n,int i,ll d){
    if(i<s||e<i)return;
    T[n]+=d;
    if(s==e)return;
    int m=(s+e)/2;
    change(s,m,n*2,i,d);
    change(m+1,e,n*2+1,i,d);
}ll get(int s,int e,int n,int l,int r){
    if(r<s||e<l)return 0;
    if(l<=s&&e<=r)return T[n];
    int m=(s+e)/2;
    return get(s,m,n*2,l,r)+get(m+1,e,n*2+1,l,r);
}int main(){
    int N,M,K;cin>>N>>M>>K;T=vector<ll>(N*4+10);A=vector<ll>(N+1);
    for(int i=1;i<=N;i++)cin>>A[i];
    init(1,N,1);for(int i=0;i<M+K;i++){
        ll a,b,c;cin>>a>>b>>c;
        if(a-1)cout<<get(1,N,1,b,c)<<endl;
        else{change(1,N,1,b,c-A[b]);A[b]=c;}
    }
}