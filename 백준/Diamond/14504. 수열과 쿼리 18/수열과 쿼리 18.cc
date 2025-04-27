#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2")
#include"bits/stdc++.h"
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int N;cin>>N;vector<int>v(N+1);for(int i=1;i<=N;++i)cin>>v[i];
    int M;cin>>M;while(M--){
        int m;cin>>m;if(m-1){
            int i,k;cin>>i>>k;
            v[i]=k;
        }else{
            int a,b,k;cin>>a>>b>>k;int c=0;for(int i=a;i<=b;i++)c+=v[i]>k;
            cout<<c<<'\n';
        }
    }
}