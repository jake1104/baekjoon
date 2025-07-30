#include<iostream>
using namespace std;
int main(){
    short N,M;cin>>N>>M;short arr[N+1];
    for(short k=1;k<=N;k++)arr[k]=k;
    for(short k=0;k<M;k++){
        short i,j;cin>>i>>j;
        arr[i]=arr[i]^arr[j]^(arr[j]=arr[i]);
    }for(short k=1;k<=N;k++)cout<<arr[k]<<' ';
}