#include<iostream>
#include<vector>
using namespace std;
int N;vector<int>A;vector<bool>D,L;
void k(int a){
    D[a]=0;L[a]=0;for(int i=0;i<N;i++)
        if(A[i]==a)k(i);
}int main(){
    cin>>N;
    A=vector<int>(N);for(int i=0;i<N;i++)cin>>A[i];
    D=vector<bool>(N,1),L=vector<bool>(N,1);
    int I;cin>>I;k(I);
    for(int i=0;i<N;i++)
        if(A[i]!=-1&&D[i])L[A[i]]=0;
    int s=0;for(int i:L)s+=i;
    cout<<s;
}