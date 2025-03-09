#include<stdio.h>
#include<queue>
using namespace std;
struct n{int x,y,d;};
int M,N,I[1000][1000];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
bool V[1000][1000];
int main(){
    scanf("%d %d",&M,&N);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d",&I[i][j]);
            V[i][j]=false;
        }
    }
    int d=0;
    queue<n>q;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(I[i][j]==1)q.push({i,j,0});
        }
    }
    while(!q.empty()){
        int x=q.front().x,y=q.front().y;
        if(!V[x][y]){
            V[x][y]=true;
            I[x][y]=1;
            for(int i=0;i<4;i++){
                int rx=dx[i]+x,ry=dy[i]+y;
                if(0<=rx&&rx<N&&0<=ry&&ry<M){
                    if(I[rx][ry]==0&&!V[rx][ry])q.push({rx,ry,q.front().d+1});
                }
            }
            int t=q.front().d;
            d=d>t?d:t;
        }
        q.pop();
    }
    bool c=false;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(I[i][j]==0)c=true;
        }
    }
    if(c)printf("-1");
    else printf("%d",d);
}