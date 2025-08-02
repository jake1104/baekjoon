#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int M,N;cin>>M>>N;
    bool A[N+1];memset(A,1,sizeof(A));A[0]=0;A[1]=0;
    for(int i=2;i<=N;i++)if(A[i])for(int j=2;j*i<=N;j++)A[i*j]=0;
    int s=0,m=-1;
    for(int i=M;i<=N;i++)s+=A[i]*i,m=(A[i]&&(m==-1||m>i))?i:m;
    if(s)cout<<s<<endl<<m;
    else cout<<-1;
}