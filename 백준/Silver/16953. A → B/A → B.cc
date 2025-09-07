#include<iostream>
#include<queue>
#include<unordered_set>
using namespace std;
typedef long long ll;
int main() {
    ll A,B;cin>>A>>B;
    queue<pair<ll,int>>q;q.push({B, 0});
    unordered_set<ll>V;V.insert(B);
    int ans=-1;
    while(!q.empty()){
        auto[t,c]=q.front();q.pop();
        if(t==A){
            ans=c+1;
            break;
        }if(~t&1){
            ll r=t/2;
            if(r>=A&&V.find(r)==V.end()){
                V.insert(r);
                q.push({r,c+1});
            }
        }if(t%10==1){
            ll r=t/10;
            if(r>=A&&V.find(r)==V.end()){
                V.insert(r);
                q.push({r,c+1});
            }
        }
    }cout<<ans;
}