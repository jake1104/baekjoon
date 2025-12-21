#include<iostream>
#include<queue>
using namespace std;
int main(){
    int T;cin>>T;while(T--){
        int J,N;cin>>J>>N;
        int R,C;priority_queue<int>pq;
        for(int i=0;i<N;i++){cin>>R>>C;pq.push(R*C);}
        while((J-=pq.top())>0)pq.pop();
        cout<<N-pq.size()+1<<endl;
    }
}