#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
int main(){
    ll A,B,c=0;
    cin>>A>>B;
    ll lim=sqrt(B)+1;
    vector<bool>sieve(lim+1,true);
    vector<ll>primes;
    for(ll i=2;i<=lim;i++){
        if(sieve[i]){
            primes.push_back(i);
            for(ll j=i*i;j<=lim;j+=i)
                sieve[j]=false;
        }
    }
    for(ll p:primes){
        ll pw=p*p;
        while(pw<=B){
            if(pw>=A) c++;
            if(pw>B/p) break;
            pw*=p;
        }
    }
    cout<<c;
}