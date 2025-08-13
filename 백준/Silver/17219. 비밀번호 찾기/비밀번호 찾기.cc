#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int N,M;cin>>N>>M;
    unordered_map<string,string>K;
    for(int i=0;i<N;i++){
        string u,k;cin>>u>>k;
        K[u]=k;
    }for(int i=0;i<M;i++){
        string t;cin>>t;
        cout<<K[t]<<endl;
    }
}