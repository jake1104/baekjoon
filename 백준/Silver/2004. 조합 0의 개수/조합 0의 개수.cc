#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll n,m;cin>>n>>m;
    ll t,r2=0,r5=0;
    t=1;while(n>>t)r2+=n>>t,t++;
    t=1;while(m>>t)r2-=m>>t,t++;
    t=1;while((n-m)>>t)r2-=(n-m)>>t,t++;
    t=5;while(n/t)r5+=n/t,t*=5;
    t=5;while(m/t)r5-=m/t,t*=5;
    t=5;while((n-m)/t)r5-=(n-m)/t,t*=5;
    cout<<(r2<r5?r2:r5);
}