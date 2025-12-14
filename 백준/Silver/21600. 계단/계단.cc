#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N;cin>>N;
    int A[N];for(int i=0;i<N;i++)cin>>A[i];
    int t=0,m=0;
    for(int i=0;i<N;i++){
        while(t>A[i])t--;
        t=t>0?t:0;
        m=m>t?m:t;t++;
    }cout<<m;
}