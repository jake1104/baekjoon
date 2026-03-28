#include<iostream>
#include<vector>
using namespace std;
int main(){
    short N;cin>>N;
    vector<short>X(N<<1);for(short i=0;i<(N<<1);i++)cin>>X[i];
    vector<short>S(N<<1,-1);
    short M=0;for(short i=0;i<(N<<1);i++){
        if(S[X[i]]+1){
            short t=i-S[X[i]]-1;
            M=M>t?M:t;
        }else S[X[i]]=i;
    }cout<<M;
}