#include<stdio.h>
#include<queue>
using namespace std;
int main(){
    int N;scanf("%d",&N);
    int I[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)scanf("%d",&I[i][j]);
    }
    bool V[N];
    int D[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){D[i][j]=0;V[j]=false;}
        queue<int> q;
        q.push(i);
        bool chk=false;
        while(!q.empty()){
            for(int j=0;j<N;j++){
                if(I[q.front()][j]&&!V[j])q.push(j);
            }
            if(chk){
                D[i][q.front()]=1;
                V[q.front()]=true;
            }
            chk=true;
            q.pop();
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)printf("%d ",D[i][j]);
        printf("\n");
    }
}