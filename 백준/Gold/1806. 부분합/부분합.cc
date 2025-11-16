#include<iostream>
using namespace std;
int main(){
    int N,S;cin>>N>>S;
    int A[N];for(int i=0;i<N;i++)cin>>A[i];
    int s[N];s[0]=A[0];for(int i=1;i<N;i++)s[i]=s[i-1]+A[i];
    int start=0,end=0,ms=0,me=N-1;
    while(end<N&&start<=end){
        int t=s[end]-s[start]+A[start];
        if(t<S)end++;
        else{
            if(end-start<me-ms){
                ms=start;
                me=end;
            }start++;
        }
    }if(s[me]-s[ms]+A[ms]<S)cout<<0;
    else cout<<me-ms+1;
}