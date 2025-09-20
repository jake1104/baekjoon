#include<iostream>
using namespace std;
typedef long long ll;
const int MOD=1000000007;
int main(){
    int N,K;cin>>N>>K;
    ll Nf=1,t=1,mp=1,p=MOD-2;for(int i=2;i<=N;i++)Nf=(Nf*i)%MOD;
    for(int i=2;i<=K;i++)t=(t*i)%MOD;
    for(int i=2;i<=N-K;i++)t=(t*i)%MOD;
    while(p){
        if(p&1)mp=(mp*t)%MOD;
        t=(t*t)%MOD;p>>=1;
    }cout<<(Nf*mp)%MOD;
}