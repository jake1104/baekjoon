#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    short N,M;cin>>N>>M;
    vector<short>A(N);for(short i=0;i<N;i++)A[i]=i+1;
    while(M--){
        short i,j;cin>>i>>j;
        reverse(A.begin()+i-1,A.begin()+j);
    }for(short i:A)cout<<i<<' ';
}