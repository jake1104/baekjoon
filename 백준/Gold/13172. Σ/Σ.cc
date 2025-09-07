#include <iostream>
using namespace std;
typedef long long ll;
const int MOD=1000000007;
ll modpow(ll a,ll x,ll m){
    ll r=1;a%=m;
    while(x>0){
        if(x& 1)r=(r*a)%m;
        a=(a*a)%m;
        x>>=1;
    }return r;
}ll modinverse(ll a,ll m){
    return modpow(a,m-2,m);
}int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int M;cin>>M;
    ll s=0;
    for(int i=0;i<M;i++){
        ll Ni,Si;cin>>Ni>>Si;
        ll invNi=modinverse(Ni,MOD);
        ll trm=(Si%MOD)*invNi%MOD;
        s=(s+trm)%MOD;
    }s%=MOD;
    cout<<s;
}