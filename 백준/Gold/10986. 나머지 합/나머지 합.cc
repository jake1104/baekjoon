#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    ll N,M;cin>>N>>M;
    vector<ll>A(N);for(ll i=0;i<N;i++)cin>>A[i];
    vector<ll>S(N);S[0]=A[0]%M;for(ll i=1;i<N;i++)S[i]=(A[i]+S[i-1])%M;
    vector<ll>R(M,0);for(ll i:S)R[i]++;
    ll r=R[0];for(ll i:R)r+=i*(i-1)/2;
    cout<<r;
}