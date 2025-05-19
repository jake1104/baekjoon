#include<iostream>
#include<unordered_map>
using namespace std;
typedef long long ll;
int main(){
    ll B,N,M,c=0;
    cin>>B>>N>>M;
    unordered_map<string,ll>p;
    while(N--){string s;ll x;cin>>s>>x;p[s]=x;}
    while(M--){string s;cin>>s;c+=p[s];}
    cout<<(c<=B?"acceptable":"unacceptable")<<endl;
}