#include<iostream>
using namespace std;
int main(){
    int N,X;cin>>N>>X;
    int b[N];for(int i=0;i<N;i++)cin>>b[i];
    int S[N];S[0]=b[0];for(int i=1;i<N;i++)S[i]=S[i-1]+b[i];
    if(S[N-1]==0){cout<<"SAD";return 0;}
    int m=0,c=0;
    for(int i=0;i<N-X+1;i++){
        int t=S[i+X-1]-S[i]+b[i];
        if(t==m)c++;
        if(t>m){m=t;c=1;}
    }cout<<m<<endl<<c;
}