#include<iostream>
#include<algorithm>
using namespace std;
struct g{int d,t;};
bool f(g a,g b){return a.t>b.t;}
int main(){
    int n;cin>>n;
    g G[n];for(int i=0;i<n;i++)cin>>G[i].d>>G[i].t;
    sort(G,G+n,f);int D=G[0].t;
    for(g i:G)D=(D<i.t?D:i.t)-i.d;
    cout<<D;
}