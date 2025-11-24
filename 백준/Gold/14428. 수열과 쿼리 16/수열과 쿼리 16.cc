#include<iostream>
#include<vector>
using namespace std;
vector<int>T,A;
int mini(int f,int b){
    if(!f)return b;
    if(!b)return f;
    if(A[f]<A[b])return f;
    if(A[b]<A[f])return b;
    return f<b?f:b;
}int init(int s,int e,int n){
    if(s==e)return T[n]=s;
    int m=(s+e)/2;
    return T[n]=mini(init(s,m,n*2),init(m+1,e,n*2+1));
}int get(int s,int e,int n,int l,int r){
    if(r<s||e<l)return 0;
    if(l<=s&&e<=r)return T[n];
    int m=(s+e)/2;
    return mini(get(s,m,n*2,l,r),get(m+1,e,n*2+1,l,r));
}void update(int s,int e,int n,int i,int x){
    if(i<s||e<i)return;
    if(s==e){A[i]=x;T[n]=i;return;}
    int m=(s+e)/2;
    update(s,m,n*2,i,x);
    update(m+1,e,n*2+1,i,x);
    T[n]=mini(T[n*2],T[n*2+1]);
}int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int N;cin>>N;T=vector<int>(N*4+10,0),A=vector<int>(N+1,1000000001);
    for(int i=1;i<=N;i++)cin>>A[i];
    init(1,N,1);int M;cin>>M;while(M--){
        int a,b,c;cin>>a>>b>>c;
        if(a-1)cout<<get(1,N,1,b,c)<<'\n';
        else update(1,N,1,b,c);
    }
}