#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct g{int A,B;};
bool f(g x,g y){return x.A<y.A;}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int n;cin>>n;
    vector<g>J(n);for(int i=0;i<n;i++)cin>>J[i].A>>J[i].B;
    sort(J.begin(),J.end(),f);
    vector<int>s(n);for(int i=0;i<n;i++)s[i]=J[i].B;
    int r=0;int h[1000000]={0},dp[1000000];
    for(int i=0;i<n;i++){
        int lb=lower_bound(h,h+r,s[i])-h;
        h[lb]=s[i];r+=lb==r;
        dp[i]=lb;
	}cout<<n-r<<'\n';
    int lis[r];
    r--;for(int i=n-1;i>=0;i--){
        if(dp[i]==r){
            lis[r]=s[i];
            r--;
        }
    }int t=0;for(int i=0;i<n;i++){
        if(lis[t]==s[i])t++;
        else cout<<J[i].A<<'\n';
    }
}