#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string a;cin>>a;
    int r=0;
    for(int i=0;i<a.size();i++)r=(r*10+(a[i]-'0'))%20000303;
    cout<<r;
}