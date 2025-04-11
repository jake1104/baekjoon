#include<iostream>
using namespace std;
int main(){
    int X,N;cin>>X>>N;
    while(N--){int a,b;cin>>a>>b;X-=a*b;}
    if(X)cout<<"No";
    else cout<<"Yes";
}