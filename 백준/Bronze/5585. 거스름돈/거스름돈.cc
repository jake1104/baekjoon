#include<iostream>
using namespace std;
int main(){
    int c;cin>>c;
    int r=0;c=1000-c;
    r+=c/500;c%=500;
    r+=c/100;c%=100;
    r+=c/50;c%=50;
    r+=c/10;c%=10;
    r+=c/5;c%=5;
    r+=c;cout<<r;
}