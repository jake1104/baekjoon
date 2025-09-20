#include<iostream>
using namespace std;
int main(){
    int N;cin>>N;
    int A[N];for(int i=0;i<N;i++)cin>>A[i];
    int dp[N]={0,};
    int M=0;
    for(int i=0;i<N;i++){
        int m=0;
        for(int j=0;j<i;j++)
            if(A[j]<A[i])m=m>dp[j]?m:dp[j];
        dp[i]=m+A[i];
        M=M>dp[i]?M:dp[i];
    }cout<<M;
}