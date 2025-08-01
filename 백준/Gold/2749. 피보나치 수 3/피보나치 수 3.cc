#include <iostream>
using namespace std;
const int mod=1000000;
const int p=mod/10*15;
int F[p]={0,1};
int main(){
    long long n;cin>>n;
    for(int i=2;i<p;i++){
        F[i]=F[i-1]+F[i-2];
        F[i]%=mod;
    }cout<<F[n%p];
}