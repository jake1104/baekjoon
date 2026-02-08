#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int N,r=0;cin>>N;int h[1000000]={0},dp[1000000];
    int A[N];for(int i=0;i<N;i++)cin>>A[i];
    for(int i=0;i<N;i++){
        int lb=lower_bound(h,h+r,A[i])-h;
        h[lb]=A[i];r+=lb==r;
        dp[i]=lb;
	}cout<<r<<'\n';
    int lis[r];
    r--;for(int i=N-1;i>=0;i--){
        if(dp[i]==r){
            lis[r]=A[i];
            r--;
        }
    }for(int i:lis)cout<<i<<' ';
}