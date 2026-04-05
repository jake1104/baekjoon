#include<iostream>
using namespace std;
int main(){
    int N,r,c,n=1,s=0;cin>>N>>r>>c;
    for(int i=0;i<N;i++)n<<=1;
    while(n!=1){
        if(r>=n>>1){r-=n>>1;s+=(n*n)>>1;}
        if(c>=n>>1){c-=n>>1;s+=(n*n)>>2;}
        n>>=1;
    }cout<<s;
}