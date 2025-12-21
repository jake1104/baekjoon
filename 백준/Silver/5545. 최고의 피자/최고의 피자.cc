#include<iostream>
#include<queue>
using namespace std;
int main(){
    int N,A,B,C,D;cin>>N>>A>>B>>C;
    double T=(double)C/A;
    priority_queue<int>pq;for(int i=0;i<N;i++){cin>>D;pq.push(D);}
    while(N--){
        D=pq.top();pq.pop();
        if(D>T*B)C+=D,A+=B,T=(double)C/A;
    }cout<<(int)T;
}