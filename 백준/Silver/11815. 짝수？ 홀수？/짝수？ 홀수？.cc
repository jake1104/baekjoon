#include<iostream>
#include<cmath>
using namespace std;
int main(){int N;cin>>N;while(N--){long long X;cin>>X;long long r=sqrt(X);cout<<(r*r==X?1:0)<<' ';}}