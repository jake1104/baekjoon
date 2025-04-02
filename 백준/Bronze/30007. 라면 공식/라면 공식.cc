#include<iostream>
using namespace std;
int main(){
    int N;cin>>N;
    int A[N],B[N],X[N];
    for(int i=0;i<N;i++){cin>>A[i]>>B[i]>>X[i];cout<<A[i]*(X[i]-1)+B[i]<<endl;}
}