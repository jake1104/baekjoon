#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 i128;
ll mul(ll x,ll y,ll m){return (i128)x*y%m;}
ll pow(ll x,ll y,ll p){
    ll r=1;
    for(x%=p;y;y>>=1,x=mul(x,x,p))if(y&1)r=mul(r,x,p);
    return r;
}
bool check(ll n,ll a){
    if(n%a==0)return 0;
    ll d=n-1;
    while(1){
        ll t=pow(a,d,n);
        if(d&1)return(t!=1&&t!=n-1);
        if(t==n-1)return 0;
        d>>=1;
    }
}
bool isPrime(ll n){
    const ll bases[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    for(auto b:bases){
        if(n==b)return 1;
        if(n>40&&check(n,b))return 0;
    }
    return n>40;
}
void factor(ll n,vector<ll>&v){
    if(n==1)return;
    if(n%2==0){v.push_back(2);factor(n/2,v);return;}
    if(isPrime(n)){v.push_back(n);return;}
    ll a,b,c,g=n;
    auto f=[&](ll x){return(c+mul(x,x,n))%n;};
    do{
        if(g==n){a=b=rand()%(n-2)+2;c=rand()%20+1;}
        a=f(a);
        b=f(f(b));
        g=__gcd(abs(a-b),n);
    }while(g==1);
    factor(g,v);
    factor(n/g,v);
}
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  ll n;cin>>n;
  vector<ll>f;
  factor(n,f);
  sort(f.begin(),f.end());
  for(auto i:f)cout<<i<<endl;
}