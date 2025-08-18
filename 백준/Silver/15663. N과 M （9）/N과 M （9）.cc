#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int N,M;vector<int>A;vector<bool>V;
set<vector<int>>s;
void f(vector<int>n){
    if(n.size()==M){
        s.insert(n);
        return;
    }for(int i=0;i<A.size();i++){
        if(!V[i]){
            vector<int>r;r=n;
            r.push_back(A[i]);
            V[i]=1;f(r);V[i]=0;
        }
    }
}int main(){
    cin>>N>>M;
    int t;for(int i=0;i<N;i++){cin>>t;A.push_back(t);V.push_back(0);}
    sort(A.begin(),A.end());f({});
    for(vector<int>v:s){
        for(int i:v)cout<<i<<' ';
        cout<<endl;
    }
}