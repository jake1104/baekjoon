#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N;cin>>N;
    vector<int>A(N),L;
    for(int i=0;i<N;i++){
        cin>>A[i];if(L.size()==0)L.push_back(A[i]);
        else{
            if(L[L.size()-1]<A[i])L.push_back(A[i]);
            else*lower_bound(L.begin(),L.end(),A[i])=A[i];
        }
    }cout<<L.size();
}