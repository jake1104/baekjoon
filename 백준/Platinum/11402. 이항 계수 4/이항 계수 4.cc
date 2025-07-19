#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
vector<int>N,K;
int M,f[2003][2003];
int C(int n,int r){
    if(r<0||r>n)return 0;
    if(r==0||r==n)return 1;
    if(f[n][r]!=-1)return f[n][r];
    return f[n][r]=(C(n-1,r-1)+C(n-1,r))%M;
}int main(){
    memset(f,-1,sizeof(f));
    long long n,k;cin>>n>>k>>M;
    if(k+k>n)k=n-k;
    while(k){
        N.push_back(n%M);n/=M;
        K.push_back(k%M);k/=M;
    }int r=1;for(int i=0;i<K.size();i++)r=(r*C(N[i],K[i]))%M;
    cout<<r;
}