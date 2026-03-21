#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
vector<ll>X,S;
ll f(ll i,ll L,ll R){return((S[R]-S[i])-(R-i)*X[i])+((i-L)*X[i]-(S[i-1]-S[L-1]));}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll N,Q;cin>>N>>Q;
    X=vector<ll>(N+1,0);for(ll i=1;i<=N;i++)cin>>X[i];
    S=vector<ll>(N+1,0);for(ll i=1;i<=N;i++)S[i]=S[i-1]+X[i];
    while(Q--){
        ll L,R;cin>>L>>R;
        L=lower_bound(X.begin()+1,X.end(),L)-X.begin();
        R=upper_bound(X.begin()+1,X.end(),R)-X.begin()-1;
        if(L>=R){cout<<0<<'\n';continue;}
        ll m=f(L+(R-L)/2,L,R),M=max(f(L,L,R),f(R,L,R));
        cout<<M-m<<'\n';
    }
}