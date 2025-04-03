#include<iostream>
using namespace std;
int main(){
    int T,X;cin>>T>>X;
    int N;cin>>N;
    while(N--){
        int K;cin>>K;
        bool c=false;
        while(K--){
            int A;cin>>A;
            c=c||A==X;
        }
        if(!c){cout<<"NO";return 0;}
    }
    cout<<"YES";
}