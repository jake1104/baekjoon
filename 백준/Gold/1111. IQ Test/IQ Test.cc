#include<iostream>
using namespace std;
int main(){
    int N;cin>>N;
    int A[N];for(int i=0;i<N;i++)cin>>A[i];
    if(N==1)cout<<'A';
    else if(N==2){
        if(A[0]==A[1])cout<<A[0];
        else cout<<'A';
    }
    else{
        int a,b;
        if(A[0]==A[1]){a=1;b=0;}
        else{
            a=(A[2]-A[1])/(A[1]-A[0]);
            b=A[1]-A[0]*a;
        }
        bool c=true;
        for(int i=1;i<N&&c;i++)c=c&&A[i]==A[i-1]*a+b;
        if(c)cout<<A[N-1]*a+b;
        else cout<<'B';
    }
}