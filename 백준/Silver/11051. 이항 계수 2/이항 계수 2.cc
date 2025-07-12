#include<iostream>
#include<string.h>
using namespace std;
int f[1001][1001];
int C(int n,int r){
    if(r==0||r==n)return 1;
    if(f[n][r]!=-1)return f[n][r];
    return f[n][r]=(C(n-1,r-1)+C(n-1,r))%10007;
}
int main(){
    memset(f,-1,sizeof(f));
    int N,K;cin>>N>>K;
    cout<<C(N,K)%10007<<endl;
}