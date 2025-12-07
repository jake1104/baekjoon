#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    ll T;cin>>T;int n;cin>>n;
    vector<ll>A(n);
    for(int i=0;i<n;i++)cin>>A[i];
    int m;cin>>m;vector<ll>B(m);
    for(int i=0;i<m;i++)cin>>B[i];
    vector<ll>AA,BB;
    AA.reserve(n*(n+1)/2);
    BB.reserve(m*(m+1)/2);
    for(int i=0;i<n;i++){
        ll s=0;
        for(int j=i;j<n;j++){
            s+=A[j];
            AA.push_back(s);
        }
    }for(int i=0;i<m;i++){
        ll s=0;
        for(int j=i;j<m;j++){
            s+=B[j];
            BB.push_back(s);
        }
    }sort(AA.begin(),AA.end());sort(BB.begin(),BB.end());
    ll ans=0;
    int l=0,r=BB.size()-1;
    while(l<AA.size()&&r>=0){
        ll cur=AA[l]+BB[r];
        if(cur==T){
            ll a=AA[l],b=BB[r],ca=0,cb=0;
            while(l<AA.size()&&AA[l]==a){ca++;l++;}
            while(r>=0&&BB[r]==b){cb++;r--;}
            ans+=ca*cb;
        }else if(cur<T)l++;
        else r--;
    }cout<<ans;
}