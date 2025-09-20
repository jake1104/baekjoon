#include<iostream>
using namespace std;
int main(){
    int N,K;cin>>N>>K;
    bool A[N];for(int i=0;i<N;i++){int t;cin>>t;A[i]=t==1;}
    int l=0,r=0,t=A[0],m=(t==K)?1:1000000;
    while(l<N-1){
        if(t==K&&l<r)t-=A[l],l++;
        else if(r<N)r++,t+=A[r];
        else break;
        if(t==K)m=(r-l+1)<m?(r-l+1):m;
    }cout<<((m-1000000)?m:-1);
}