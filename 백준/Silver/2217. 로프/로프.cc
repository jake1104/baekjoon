#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int N;cin>>N;
    vector<int>A(N);for(int i=0;i<N;i++)cin>>A[i];
    sort(A.begin(),A.end());
    int M=0;
    for(int i=N-1;i>=0;i--){
        int t=A[i]*(N-i);
        M=M>t?M:t;
    }cout<<M;
}