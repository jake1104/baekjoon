#include<iostream>
using namespace std;
int main(){
    long N;cin>>N;
    int A[N];for(int i=0;i<N;i++)cin>>A[i];
    long t;
    long a=0;t=0;for(int i=0;i<N;i++)a+=(i-t)*(A[i]&1),t+=A[i]&1;
    long b=0;t=0;for(int i=0;i<N;i++)b+=(i-t)*(~A[i]&1),t+=~A[i]&1;
    cout<<(a<b?a:b);
}