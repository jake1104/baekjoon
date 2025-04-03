#include<iostream>
using namespace std;
int main(){
    int N;cin>>N;
    int p[N];for(int i=0;i<N;i++)cin>>p[i];
    int M;cin>>M;
    int c=0;
    while(M--){int B;cin>>B;c+=p[B-1];}
    cout<<c;
}