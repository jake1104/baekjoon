#include<iostream>
using namespace std;
typedef long long ll;
ll gcd(ll x,ll y){
    if(y>x)return gcd(y,x);
    while(y){
        ll t=y;
        y=x%y;x=t;
    }return x;
}int main(){
    ll A,B,C,D;cin>>A>>B>>C>>D;
    ll ab=gcd(A,B),cd=gcd(C,D);
    A/=ab,B/=ab;C/=cd,D/=cd;
    ll bd=B*D/gcd(B,D);
    ll abcd=A*(bd/B)+C*(bd/D);
    cout<<abcd/gcd(abcd,bd)<<' '<<bd/gcd(abcd,bd);
}