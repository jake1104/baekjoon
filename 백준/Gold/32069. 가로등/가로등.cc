#include <stdio.h>
#include <queue>
#include <unordered_set>
using namespace std;
typedef long long ll;
struct n{ll p,d;};
int dx[2] = {-1, 1};
int main(){
    ll L;int N,K;
    scanf("%lld %d %d",&L,&N,&K);
    unordered_set<ll>V;
    queue<n>q;
    for(ll A,i=0;i<N;scanf("%lld",&A),q.push({A,0}),V.insert(A),i++);
    for (int c=0;!q.empty()&&c<K;c++){
        n t=q.front();q.pop();
        printf("%lld\n",t.d);
        for(int i=0;i<2;i++){
            ll rx=t.p+dx[i];
            if(0<=rx&&rx<=L&&V.insert(rx).second)q.push({rx,t.d+1});
        }
    }
}