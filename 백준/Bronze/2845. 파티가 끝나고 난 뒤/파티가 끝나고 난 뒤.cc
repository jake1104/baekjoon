#include<iostream>
using namespace std;
int main(){
    int L,P;cin>>L>>P;int r=L*P;
    for(int i=0;i<5;i++){
        int t=0;cin>>t;
        cout<<t-r<<' ';
    }
}