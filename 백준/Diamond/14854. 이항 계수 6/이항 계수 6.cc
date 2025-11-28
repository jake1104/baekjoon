#include<iostream>
#include<vector>
#include<map>
using namespace std;
typedef long long ll;
const ll MOD=142857;
const ll M_list[4]={27,11,13,37};
ll N_list[4];
ll crt_inv[4];
map<ll,vector<vector<ll>>>preC;
vector<ll>preprod27;
vector<ll>pow27_base;
ll gcd(ll a,ll b,ll&x,ll&y){
    if(!b){x=1;y=0;return a;}
    ll x1,y1;
    ll d=gcd(b,a%b,x1,y1);
    x=y1;y=x1-y1*(a/b);
    return d;
}ll modInv(ll a,ll m){
    ll x,y;
    ll g=gcd(a,m,x,y);
    if(g!=1)return-1;
    return(x%m+m)%m;
}ll VpNfact(ll n,ll p){
    ll s=0;
    while(n){n/=p;s+=n;}
    return s;
}ll U27(ll n){
    if(n==0)return 1;
    ll res=1;
    while(n){
        ll exp=n/27;
        ll exp_red=exp%18;
        ll factor=pow27_base[exp_red];
        res=(res*factor)%27;
        res=(res*preprod27[n%27])%27;
        n/=3;
    }
    return res;
}ll C27(ll n,ll k){
    if(k<0||k>n)return 0;
    if(k==0||k==n)return 1;
    ll v=VpNfact(n,3)-VpNfact(k,3)-VpNfact(n-k,3);
    if(v>=3)return 0;
    ll num=U27(n);
    ll den=(U27(k)*U27(n-k))%27;
    ll inv_den=modInv(den,27);
    if(inv_den==-1)return 0;
    ll res=num*inv_den%27;
    if(v==1)res=res*3%27;
    else if(v==2)res=res*9%27;
    return res;
}ll LT(ll n,ll k,ll m){
    if(k<0||k>n)return 0;
    vector<vector<ll>>&table=preC[m];
    ll res=1;
    while(n||k){
        ll ni=n%m,ki=k%m;
        if(ki>ni)return 0;
        res=(res*table[ni][ki])%m;
        n/=m;k/=m;
    }
    return res;
}ll CRT(ll n,ll k){
    if(k<0||k>n)return 0;
    if(k>n-k)k=n-k;
    ll r[4];
    r[0]=C27(n,k);
    r[1]=LT(n,k,11);
    r[2]=LT(n,k,13);
    r[3]=LT(n,k,37);
    ll res=0;
    for(int i=0;i<4;i++){
        ll term=r[i]*N_list[i]%MOD;
        term=term*crt_inv[i]%MOD;
        res=(res+term)%MOD;
    }
    return(res%MOD+MOD)%MOD;
}void pre(){
    vector<ll>mods={11,13,37};
    for(ll m:mods){
        vector<vector<ll>>C_table(50,vector<ll>(50,0));
        for(int i=0;i<50;i++){
            C_table[i][0]=1;
            if(i>0)C_table[i][i]=1;
            for(int j=1;j<i;j++)
                C_table[i][j]=(C_table[i-1][j-1]+C_table[i-1][j])%m;
        }
        preC[m]=C_table;
    }
    preprod27.resize(27);
    preprod27[0]=1;
    for(int i=1;i<27;i++){
        if(i%3==0)preprod27[i]=preprod27[i-1];
        else preprod27[i]=(preprod27[i-1]*i)%27;
    }
    ll base27=preprod27[26];
    pow27_base.resize(18);
    pow27_base[0]=1;
    for(int i=1;i<18;i++)pow27_base[i]=(pow27_base[i-1]*base27)%27;
    for(int i=0;i<4;i++){
        N_list[i]=MOD/M_list[i];
        crt_inv[i]=modInv(N_list[i],M_list[i]);
    }
}int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    pre();int T;cin>>T;
    while(T--){
        ll n,k;cin>>n>>k;
        cout<<CRT(n,k)<<'\n';
    }
}