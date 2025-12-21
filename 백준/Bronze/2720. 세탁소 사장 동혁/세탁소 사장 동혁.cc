#include<iostream>
using namespace std;
int main(){
    int T;cin>>T;while(T--){
        int C;cin>>C;
        int Q=0,D=0,N=0,P=0;
        Q+=C/25;C%=25;
        D+=C/10;C%=10;
        N+=C/5;C%=5;
        P+=C;cout<<Q<<' '<<D<<' '<<N<<' '<<P<<endl;
    }
}