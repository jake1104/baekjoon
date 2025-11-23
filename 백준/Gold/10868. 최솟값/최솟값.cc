#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>T,A;
int init(int s,int e,int n){
    if(s==e)return T[n]=A[s];
    int m=(s+e)/2;
    return T[n]=min(init(s,m,n*2),init(m+1,e,n*2+1));
}int get(int s,int e,int n,int l,int r){
    if(r<s||e<l)return 2147483647;
    if(l<=s&&e<=r)return T[n];
    int m=(s+e)/2;
    return min(get(s,m,n*2,l,r),get(m+1,e,n*2+1,l,r));
}int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int N,M;cin>>N>>M;T=vector<int>(N*4+10);A=vector<int>(N+1);
    for(int i=1;i<=N;i++)cin>>A[i];
    init(1,N,1);for(int i=0;i<M;i++){
        int a,b;cin>>a>>b;
        cout<<get(1,N,1,a,b)<<'\n';
    }
}