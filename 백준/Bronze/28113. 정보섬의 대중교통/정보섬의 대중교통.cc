#include<iostream>
using namespace std;
int main(){
    int N,A,B;cin>>N>>A>>B;
    if(N>B||A<B)cout<<"Bus";
    else if(A==B)cout<<"Anything";
    else cout<<"Subway";
}