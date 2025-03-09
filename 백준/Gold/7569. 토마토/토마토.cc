#include<stdio.h>
#include<queue>
using namespace std;
struct n{int x,y,z,d;};
int M,N,H,I[100][100][100];
int dx[6]={-1,1,0,0,0,0};
int dy[6]={0,0,-1,1,0,0};
int dz[6]={0,0,0,0,-1,1};
bool V[100][100][100];
int main(){
    scanf("%d %d %d",&M,&N,&H);
    queue<n>q;
    for(int i=0;i<H;i++){
        for(int j=0;j<N;j++){
            for(int k=0;k<M;k++){
                scanf("%d",&I[i][j][k]);
                V[i][j][k]=false;
                if(I[i][j][k]==1)q.push({i,j,k,0});
            }
        }
    }
    int d=0;
    while(!q.empty()){
        int x=q.front().x,y=q.front().y,z=q.front().z;
        if(!V[x][y][z]){
            V[x][y][z]=true;
            I[x][y][z]=1;
            for(int i=0;i<6;i++){
                int rx=dx[i]+x,ry=dy[i]+y,rz=dz[i]+z;
                if(0<=rx&&rx<H&&0<=ry&&ry<N&&0<=rz&&rz<M){
                    if(I[rx][ry][rz]==0&&!V[rx][ry][rz])q.push({rx,ry,rz,q.front().d+1});
                }
            }
            int t=q.front().d;
            d=d>t?d:t;
        }
        q.pop();
    }
    bool c=false;
    for(int i=0;i<H;i++){
        for(int j=0;j<N;j++){
            for(int k=0;k<M;k++){
                if(I[i][j][k]==0)c=true;
            }
        }
    }
    if(c)printf("-1");
    else printf("%d",d);
}