#include<iostream>
using namespace std;
typedef long long ll;
ll n,*a,*s;
ll f(int l,int r){
    if(l==r)return 0;
    if(a[l]<a[r])return a[l]*(s[r]-s[l])+f(l+1,r);
    return a[r]*(s[r-1]-s[l]+a[l])+f(l,r-1);
}int main(){
    int n;cin>>n;
    a=new ll[n],s=new ll[n];
    for(int i=0;i<n;i++)cin>>a[i];
    s[0]=a[0];for(int i=1;i<n;i++)s[i]=a[i]+s[i-1];
    cout<<f(0,n-1);
}