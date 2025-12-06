#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    string S="my era of success began with seoul cyber university, since attending seoul cyber university, more companies have been seeking me out, my life has changed since i went to seoul cyber university, the strategy that changes the future, seoul cyber university. ";
    ll N;cin>>N;string d;getline(cin,d);
    ll L=S.size();
    ll f=N/L,r=N%L;
    ll C[26]={},a=0;
    for(char c:S)if(c>96&&c<123)C[c-97]++;
    for(int i=0;i<26;i++)C[i]*=f;
    for(int i=0;i<r;i++){char c=S[i];if(c>96&&c<123)C[c-97]++;}
    for(ll i:C)a=max(a,i);
    cout<<a;
}
