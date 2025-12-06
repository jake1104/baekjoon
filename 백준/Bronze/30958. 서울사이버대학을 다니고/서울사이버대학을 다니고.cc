#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  string S="my era of success began with seoul cyber university, since attending seoul cyber university, more companies have been seeking me out, my life has changed since i went to seoul cyber university, the strategy that changes the future, seoul cyber university. ";
  ll N;cin>>N;string d;getline(cin,d);
  ll L=S.size(),f=N/L,r=N%L,ans=0;
  for(char x='a';x<='z';x++){
    ll k=0;
    for(int i=0;i<L;i++) if(S[i]==x) k++;
    ll c=k*f;
    for(int i=0;i<r;i++) if(S[i]==x) c++;
    ans=max(ans,c);
  }cout<<ans;
}
