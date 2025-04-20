#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N;cin>>N;
    int A[N],B[N];
    for(int i=0;i<N;i++)cin>>A[i];
    for(int i=0;i<N;i++)cin>>B[i];
    sort(A,A+N);
    sort(B,B+N);
    int s=0;
    for(int i=0;i<N;i++)s+=A[i]*B[N-i-1];
    cout<<s;
}