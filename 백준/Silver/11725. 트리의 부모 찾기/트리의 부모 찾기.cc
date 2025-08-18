#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;vector<vector<int>>T(N);
    for(int i=0;i<N-1;i++){
        int x,y;cin>>x>>y;
        T[x-1].push_back(y-1);
        T[y-1].push_back(x-1);
    }int P[N];queue<int>q;q.push(0);
    vector<bool>V(N,0);while(!q.empty()){
        int t=q.front();q.pop();V[t]=1;
        for(int i=0;i<T[t].size();i++){
            if(!V[T[t][i]]){
                q.push(T[t][i]);
                P[T[t][i]]=t;
            }
        }
    }for(int i=1;i<N;i++)cout<<P[i]+1<<'\n';
}