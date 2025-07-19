#include<iostream>
using namespace std;
int main(){
    long N;cin>>N;
    long A[N],dp[N],s=0;for(int i=0;i<N;i++){cin>>A[i];dp[i]=0;}
    for(int i=1;i<N;i++){
        dp[i]=dp[i-1];
        if(A[i-1]>=A[i]){
            int p=A[i];
            while(p<A[i-1]){p<<=1;dp[i]++;}
        }else{
            int p=A[i-1];
            while((p<<1)<=A[i]){p<<=1;dp[i]--;}
            if(dp[i]<0)dp[i]=0;
        }
        s+=dp[i];
    }cout<<s;
}