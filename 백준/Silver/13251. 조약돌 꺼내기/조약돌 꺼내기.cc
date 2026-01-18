#include<iostream>
using namespace std;
double C(int n,int r){
    if(r>n)return 0;
    if(r==0||r==n)return 1;
    if(r>n-r)r=n-r;
    double a=1.0;
    for(int i=1;i<=r;i++)a*=(double)(n-i+1)/i;
    return a;
}int main(){
    int M;cin>>M;
    int j[M],s=0;
    for (int i = 0; i < M; i++){cin>>j[i];s+=j[i];}
    int K;cin>>K;
    double r=0.0;for(int i=0;i<M;i++)r+=C(j[i],K)/C(s, K);
    cout<<fixed;
    cout.precision(16);
    cout<<r;
}