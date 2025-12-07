#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
ll lb(ll x){ll t=0;while(x>>=1){t++;}return t;}
ll F2(ll x){return((ll)lb(x)*x)>>1;}
ll F(ll x){
    ll l=x;vector<bool>b;while(x){b.push_back(x&1);x>>=1;}
    ll r=0,t=b.size()-1;while(b.size()){
        if(b.back()){l-=(1LL<<t);r+=F2(1LL<<t);r+=l+1;}
        b.pop_back();t--;
    }return r;
}int main(){
    ll A,B;cin>>A>>B;
    cout<<F(B)-F(A-1);
}