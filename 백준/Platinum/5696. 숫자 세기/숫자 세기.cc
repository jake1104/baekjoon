#include<iostream>
#include<vector>
using namespace std;
typedef unsigned long long ull;
typedef unsigned int ui;
vector<ull>f(ui N){
    vector<ull>C(10,0);ui t=1;while(N/t){
        ui h=N/(t*10),m=(N/t)%10,l=N%t;
        for(ui d=0;d<10;d++)C[d]+=h*t;
        for(ui d=0;d<m;d++)C[d]+=t;
        C[m]+=l+1,C[0]-=t,t*=10;
    }return C;
}int main(){
    while(1){
        ui A,B;cin>>A>>B;
        if((!A)&(!B))return 0;
        auto a=f(A-1),b=f(B);
        for(int i=0;i<10;i++)cout<<b[i]-a[i]<<' ';
        cout<<endl;
    }
}