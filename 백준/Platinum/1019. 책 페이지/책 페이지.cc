#include<iostream>
using namespace std;
typedef unsigned long long ull;
typedef unsigned int ui;
int main(){
    ui N;cin>>N;ull C[10]={0,};ui t=1;while(N/t){
        ui h=N/(t*10),m=(N/t)%10,l=N%t;
        for(ui d=0;d<10;d++)C[d]+=h*t;
        for(ui d=0;d<m;d++)C[d]+=t;
        C[m]+=l+1,C[0]-=t,t*=10;
    }for(int i=0;i<10;i++)cout<<C[i]<<' ';
}