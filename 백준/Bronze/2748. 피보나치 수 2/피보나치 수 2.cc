#include<iostream>
#include<string.h>
using namespace std;
typedef long long ll;
ll F[91];
ll f(int n){
    if(n<2)return n;
    if(F[n]!=-1)return F[n];
    return F[n]=f(n-1)+f(n-2);
}
int main(){
    memset(F,-1,sizeof(F));
    int n;cin>>n;
    cout<<f(n);
}