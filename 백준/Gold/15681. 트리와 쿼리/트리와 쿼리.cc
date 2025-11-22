#include<iostream>
#include<vector>
using namespace std;
vector<bool>V;
vector<vector<int>>T;
vector<int>C;
int f(int p){
    V[p]=1;
    for(int i:T[p]){if(!V[i])C[p]+=f(i);}
    return C[p];
}int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int N,R,Q;cin>>N>>R>>Q;
    V=vector<bool>(N,0);
    T=vector<vector<int>>(N,vector<int>());
    C=vector<int>(N,1);
    for(int i=0;i<N-1;i++){
        int U,V;cin>>U>>V;
        T[U-1].push_back(V-1);
        T[V-1].push_back(U-1);
    }f(R-1);while(Q--){
        int U;cin>>U;
        cout<<C[U-1]<<'\n';
    }
}