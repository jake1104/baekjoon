#include<iostream>
using namespace std;
int main(){
    int N,P,x=0;cin>>N;
    for(int i=0;i<N;i++){cin>>P;x^=P;}
    cout<<(x?"koosaga":"cubelover");
}