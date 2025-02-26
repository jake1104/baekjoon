#include <stdio.h>
#include <queue>
using namespace std;
struct l{int x,y,d;};
int main() {
    int n,m,I[1000][1000],M[1000][1000]={0};
    scanf("%d %d",&n,&m);
    queue<l> q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&I[i][j]);
            if(I[i][j]==2){q.push({i,j,0});M[i][j]=0;}
            else M[i][j]=-1;
        }
    }
    int dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};
    while(!q.empty()){
        l t=q.front();q.pop();
        for(int i=0;i<4;i++){
            int x=t.x+dx[i],y=t.y+dy[i];
            if(x>=0&&x<n&&y>=0&&y<m&&I[x][y]&&M[x][y]==-1){
                M[x][y]=t.d+1;
                q.push({x,y,t.d+1});
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(I[i][j]==0)printf("0 ");
            else printf("%d ",M[i][j]);
        }
        printf("\n");
    }
}
