#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long ll;
struct C{char T;ll U;};
ll F[4];priority_queue<ll>cs[4];
ll f(short a,short b){
    if(cs[a].empty())return b;
    if(cs[b].empty())return a;
    ll x=F[b]*cs[a].top(),y=F[a]*cs[b].top();
    return x>y?a:b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int N,K;cin>>N>>K>>F[0]>>F[1]>>F[2]>>F[3];
    for(int i=0;i<N;i++){char T;ll U;cin>>T>>U;cs[T-65].push(U);}
    for(int i=0;i<K;i++){
        int m=0;
        m=f(m,1);m=f(m,2);m=f(m,3);
        char t=m+65;
        cout<<t<<' '<<cs[m].top()<<'\n';
        F[m]+=cs[m].top();cs[m].pop();
    }
}