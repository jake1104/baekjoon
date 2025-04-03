#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;cin>>N>>Q;
    vector<pair<int,int>>v(N);
    for(int i=0;i<N;++i)cin>>v[i].second>>v[i].first;
    sort(v.begin(),v.end());
    vector<int>x(N),a(N);
    for(int i=0;i<N;++i)x[i]=v[i].first,a[i]=v[i].second;
    vector<ll>p_a(N+1,0),p_ax(N+1,0);
    for(int i=1;i<=N;++i)p_a[i]=p_a[i-1]+a[i-1],p_ax[i]=p_ax[i-1]+(ll)a[i-1]*x[i-1];
    ll ta=p_a[N],tax=p_ax[N];
    while(Q--){
        int q;
        cin>>q;
        int idx=lower_bound(x.begin(),x.end(),q)-x.begin();
        ll la=p_a[idx],lax=p_ax[idx],ra=ta-la,rax=tax-lax;
        cout<<q*la-lax+(rax-q*ra)<<'\n';
    }
}