#include<iostream>
using namespace std;
int N,C[102],r=0;
int A[101][101];
void f(int d,int c,int p){
    if(d>N){
        if(!r)r=p;
        else r=r<p?r:p;
        return;
    }
    if(!A[d][c])A[d][c]=p;
    else if(A[d][c]>=p)A[d][c]=p;
    else return;
    if(C[d]){
        while(C[d])d++;
        f(d,c,p);
        return;
    }
    if(c>=3)f(d+1,c-3,p);
    f(d+1,c,p+10000);
    f(d+3,c+1,p+25000);
    f(d+5,c+2,p+37000);
    return;
}
int main(){
    int M;cin>>N>>M;
    for(int i=0;i<M;i++){int t;cin>>t;C[t]=1;}
    f(1,0,0);
    cout<<r;
}