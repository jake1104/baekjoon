#include<iostream>
using namespace std;
int N,C[102],r=2147483647;
int A[101][101];
void f(int d,int c,int p){
    while(C[d])d++;
    if(p>=r)return;
    if(d>N){
        r=r<p?r:p;
        return;
    }
    if(!A[d][c]||A[d][c]>p)A[d][c]=p;
    else return;
    if(c>=3)f(d+1,c-3,p);
    f(d+5,c+2,p+37000);
    f(d+3,c+1,p+25000);
    f(d+1,c,p+10000);
    return;
}
int main(){
    int M;cin>>N>>M;
    for(int i=0;i<M;i++){int t;cin>>t;C[t]=1;}
    f(1,0,0);
    cout<<r;
}