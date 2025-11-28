#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
int main(){
    string A,B;cin>>A>>B;
    ll a=0,b=0;
    while(A.length()){a+=A[0]-'0';A=A.substr(1,A.length());}
    while(B.length()){b+=B[0]-'0';B=B.substr(1,B.length());}
    cout<<a*b;
}