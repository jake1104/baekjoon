#include<iostream>
using namespace std;
int main(){
    int N;cin>>N;
    int A[N];for(int i=0;i<N;i++)cin>>A[i];
    int t;
    int a=0;t=0;for(int i=0;i<N;i++)a+=(i-t)*(A[i]&1),t+=A[i]&1;
    int b=0;t=0;for(int i=0;i<N;i++)b+=(i-t)*(~A[i]&1),t+=~A[i]&1;
    cout<<(a<b?a:b);
}