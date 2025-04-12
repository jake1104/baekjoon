#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int M=4*400000+5;
vector<int>A[M];
void build(int n,int l,int r,const vector<int>&a){
    if(l==r)A[n].push_back(a[l]);
    else{
        int m=(l+r)/2;
        build(2*n,l,m,a),build(2*n+1,m+1,r,a);
        int s=A[2*n].size()+A[2*n+1].size();
        A[n].resize(s);
        merge(A[2*n].begin(),A[2*n].end(),A[2*n+1].begin(),A[2*n+1].end(),A[n].begin());
    }
}
int get(int k,int n,int a,int b,int l,int r){
    if(b<l||r<a)return 0;
    if(a<=l&&r<=b)return upper_bound(A[n].begin(),A[n].end(),k)-A[n].end();
    int m=(l+r)/2;
    return get(k,2*n,a,b,l,m)+get(k,2*n+1,a,b,m+1,r);
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int N;cin>>N;
    vector<int>v(N+1);
    for(int i=1;i<=N;i++)cin>>v[i];
    build(1,1,N,v);
    int Q;cin>>Q;
    int last_ans=0;
    while(Q--){
        int a,b,c;cin>>a>>b>>c;
        int i=a^last_ans;
        int j=b^last_ans;
        int k=c^last_ans;
        last_ans=-get(k,1,i,j,1,N);
        cout<<last_ans<<'\n';
    }
}