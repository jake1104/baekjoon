#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int N;scanf("%d",&N);
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<N;i++){
        int x;scanf("%d",&x);
        if(x==0){
            if(pq.empty())printf("0\n");
            else{
                printf("%d\n",pq.top());
                pq.pop();
            }
        }else pq.push(x);
    }
}