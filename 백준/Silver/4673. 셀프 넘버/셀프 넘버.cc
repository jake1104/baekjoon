#include<iostream>
#include<bitset>
using namespace std;
const int n=10000;
int d(int a){
    int s=a;
    while(a)s+=a%10,a/=10;
    return s;
}int main(){
    bitset<n+1>I(0);I=~I;
    for(int i=1;i<=n;i++){
        if(I[i])cout<<i<<'\n';
        I[d(i)]=0;
    }
}