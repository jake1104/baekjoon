#include<iostream>
using namespace std;
int M,N,map[500][500],H[500][500];
int dx[4]={0,-1,0,1};
int dy[4]={-1,0,1,0};
int f(int x,int y){
    if(x==M-1&&y==N-1)return 1;
    if(H[x][y]!=-1)return H[x][y];
    H[x][y]=0;
    for(int i=0;i<4;i++){
        int rx=x+dx[i],ry=y+dy[i];
        if(0<=rx&&rx<M&&0<=ry&&ry<N){
            if(map[x][y]>map[rx][ry])H[x][y]+=f(rx,ry);
        }
    }return H[x][y];
}
int main(){
    cin>>M>>N;
    for(int i=0;i<M;i++){for(int j=0;j<N;j++)cin>>map[i][j];}
    for(int i=0;i<M;i++){for(int j=0;j<N;j++)H[i][j]=-1;}
    cout<<f(0,0);
}