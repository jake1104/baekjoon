#include<iostream>
using namespace std;
int N,M[400];bool A[400][400];
bool b(int u,bool s[]){
    for(int v=0;v<2*N;v++){
        if(A[u][v]&&!s[v]){
            s[v]=1;
            if(M[v]<0||b(M[v],s)){
                M[v]=u;
                return 1;
            }
        }
    }return 0;
}int main(){
    cin>>N;
    bool**V=new bool*[N];
    for(int i=0;i<N;i++){
        V[i]=new bool[N];
        for(int j=0;j<N;j++)cin>>V[i][j];
    }for(int i=0;i<400;i++)M[i]=-1;
    for(int y=0;y<N;y++){
        for(int x=0;x<N;x++){
            if(V[y][x]){
                int d1=y-x+N-1,d2=y+x;
                A[d1][d2]=1;
            }
        }
    }int r=0;
    for(int u=0;u<2*N;u++){
        bool s[400]{};
        r+=b(u,s);
    }cout<<r;
}