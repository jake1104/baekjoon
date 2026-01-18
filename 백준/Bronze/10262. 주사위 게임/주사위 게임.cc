#include<iostream>
using namespace std;
int main(){
    int a1,b1,a2,b2;
    cin>>a1>>b1>>a2>>b2;
    int G=a1+b1+a2+b2;
    cin>>a1>>b1>>a2>>b2;
    int E=a1+b1+a2+b2;
    int r=G-E;
    cout<<(r?(r>0?"Gunnar":"Emma"):"Tie");
}