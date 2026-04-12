#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
ll N;
vector<ll>A,B,lc,Ss;
vector<ll>frs,fls;
int fr(ll T){
    if(frs[T])return frs[T];
    return frs[T]=fr(A[T])+fr(B[T])+lc[B[T]]-1;
}int fl(ll T){
    if(fls[T])return fls[T];
    return fls[T]=fl(B[T])+fl(A[T])+lc[A[T]]-1;
}int S(ll T){
    if(Ss[T])return Ss[T];
    ll At=A[T],Bt=B[T];
    return Ss[T]=S(At)+S(Bt)+fl(At)*lc[Bt]+lc[At]*fr(Bt)-1;
}int main(){
    cin>>N;
    A=vector<ll>(N+1),B=vector<ll>(N+1);
    lc=vector<ll>(N+1,1);
    frs=vector<ll>(N+1,0);
    fls=vector<ll>(N+1,0);
    Ss=vector<ll>(N+1,0);
    frs[0]=1,fls[0]=1,Ss[0]=1;
    for(ll i=1;i<=N;i++){
        cin>>A[i]>>B[i];
        lc[i]=lc[A[i]]+lc[B[i]];
        cout<<S(i)<<'\n';
    }
}