#include<iostream>
using namespace std;
int main(){
    int s=0;for(int i=0;i<5;i++){int t;cin>>t;s+=t>=40?t:40;}
    cout<<s/5;
}