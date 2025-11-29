#include<iostream>
#include<bitset>
#include<vector>
using namespace std;
short N;vector<short>A;bitset<51>D,L;
void k(short a){
    D[a]=0;L[a]=0;for(short i=0;i<N;i++)
        if(A[i]==a)k(i);
}int main(){
    cin>>N;
    A=vector<short>(N);for(short i=0;i<N;i++)cin>>A[i];
    D.set();L.set();
    int I;cin>>I;k(I);
    for(short i=0;i<N;i++)
        if(A[i]!=-1&&D[i])L[A[i]]=0;
    cout<<L.count()-51+N;
}