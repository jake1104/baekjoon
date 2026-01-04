#include<iostream>
using namespace std;
long min(long a,long b){return a<b?a:b;}
int main(){
    long X,Y,W,S;cin>>X>>Y>>W>>S;
    if(W>S)cout<<(X+Y-min(X,Y))*S+((X+Y-2*min(X,Y))%2)*(W-S);
    else if(2*W>=S)cout<<min(X,Y)*S+(X+Y-2*min(X,Y))*W;
    else cout<<(X+Y)*W;
}