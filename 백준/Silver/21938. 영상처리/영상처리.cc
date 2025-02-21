#include<stdio.h>
int R[1000][1000];
bool V[1000][1000];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int N, M;
int c=0;
void dfs(int x,int y){
    V[x][y]=1;
    for(int i=0;i<4;i++) {
        int rx=x+dx[i],ry=y+dy[i];
        if(rx>=0&&rx<N&&ry>=0&&ry<M){
            if(R[rx][ry]&&!V[rx][ry])dfs(rx,ry);
        }
    }
}
int main(){
    scanf("%d %d",&N,&M);
    int I[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            int R,G,B;scanf("%d %d %d",&R,&G,&B);
            I[i][j]=R+G+B;
        }
    }
    int T;scanf("%d",&T);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            R[i][j]=I[i][j]>=T*3;
            V[i][j]=false;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if (R[i][j]&&!V[i][j]){
                c++;dfs(i,j);
            }
        }
    }
    printf("%d",c);
}