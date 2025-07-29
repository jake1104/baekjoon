#include<iostream>
#include<vector>
#include<cmath>
#include<map>
using namespace std;
typedef long long ll;
const ll MOD=142857;
ll M[4]={27,11,13,37},N[4]={11*13*37,27*13*37,27*11*37,27*11*13};
map<ll,vector<vector<ll>>>precomputedC;
map<ll,vector<ll>>preprodCache;
ll gcd(ll a,ll b,ll&x,ll&y){ // Euclidean Algorithm
    if(!b){
        x=1;y=0;
        return a;
    }
    ll x1,y1;
    ll d=gcd(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return d;
}
ll modInv(ll a,ll m){ // Modular Inverse
    ll x,y,g=gcd(a,m,x,y);
    if(g!=1)return-1;
    return(x%m+m)%m;
}
ll C(ll n,ll r,ll m){ // Combination
    if(r<0||r>n)return 0;
    if(r==0||r==n)return 1;
    return precomputedC[m][n][r];
}
ll POW(ll x,ll n,ll m){ // x^n mod m
    if(n==0)return 1;
    ll u=POW(x,n/2,m);
    u=(u*u)%m;
    if(n&1)u=(u*x)%m;
    return u;
}
ll VpNfact(ll n,ll p){ // Vp(n!)
    ll s=0;
    while(n){
        n/=p;
        s+=n;
    }
    return s;
}
ll U(ll n,ll p,ll pq){ // n!p
    if(!n)return 1;
    if(preprodCache.find(pq)==preprodCache.end()){
        vector<ll>preprod(pq);
        preprod[0]=1;
        for(int i=1;i<pq;i++){
            if(i%p==0)preprod[i]=preprod[i-1];
            else preprod[i]=(preprod[i-1]*i)%pq;
        }
        preprodCache[pq]=preprod;
    }
    vector<ll>&preprod=preprodCache[pq];
    ll r=POW(preprod[pq-1],n/pq,pq);
    r=(r*preprod[n%pq])%pq;
    return(r*U(n/p,p,pq))%pq;
}
ll LT(ll n,ll k,ll m){ // Lucas's Theorem
    ll r=1;
    while(k){
        ll ni=n%m,ki=k%m;
        if(ki>ni)return 0;
        r=(r*C(ni,ki,m))%m;
        n/=m;
        k/=m;
    }
    return r;
}
ll LTE(ll n,ll k,ll p,ll q){ // Lucas's Theorem Expanded
    if(k<0||k>n)return 0;
    if(k==0||k==n)return 1;
    ll pq=1;
    for(int i=0;i<q;i++)pq*=p;
    ll v=VpNfact(n,p)-VpNfact(k,p)-VpNfact(n-k,p);
    if(v>=q)return 0;
    ll numerator=U(n,p,pq);
    ll denominator=(U(k,p,pq)*U(n-k,p,pq))%pq;
    ll invDen=modInv(denominator,pq);
    if(invDen==-1)return 0;
    ll r=numerator*invDen%pq;
    ll pow_p=1;
    for(int i=0;i<v;i++)pow_p=(pow_p*p)%pq;
    r=(r*pow_p)%pq;
    return r;
}
ll CRT(ll n,ll k){ // Chinese Remainder Theorem
    if(k+k>n)k=n-k;
    ll r[4];
    for(int i=0;i<4;i++){
        if(M[i]==27)r[i]=LTE(n,k,3,3);
        else r[i]=LT(n,k,M[i]);
    }
    ll result=0;
    for(int i=0;i<4;i++){
        ll temp=(r[i]*N[i])%MOD;
        temp=(temp*modInv(N[i],M[i]))%MOD;
        result=(result+temp)%MOD;
    }
    return result;
}
void precompute(){
    ll mods[]={27,11,13,37};
    for(ll m:mods){
        vector<vector<ll>>C_table(50,vector<ll>(50,0));
        for(int i=0;i<50;i++){
            C_table[i][0]=C_table[i][i]=1;
            for(int j=1;j<i;j++){
                C_table[i][j]=(C_table[i-1][j-1]+C_table[i-1][j])%m;
            }
        }
        precomputedC[m]=C_table;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    precompute();
    int T;cin>>T;
    while(T--){
        ll n,k;cin>>n>>k;
        cout<<CRT(n,k)<<'\n';
    }
    return 0;
}