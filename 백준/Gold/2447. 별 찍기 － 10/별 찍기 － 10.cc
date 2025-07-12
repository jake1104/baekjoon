#include<iostream>
using namespace std;
bool**b;
void f(int N,int x,int y){
    if(N==1){b[x][y]=1;return;}
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i!=1||j!=1)f(N/3,x+i*(N/3),y+j*(N/3));
        }
    }
}
int main(){
    int N;cin>>N;
    b=new bool*[N];for(int i=0;i<N;i++){
        b[i]=new bool[N];
        for(int j=0;j<N;j++)b[i][j]=0;
    }f(N,0,0);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(b[i][j])cout<<'*';
            else cout<<' ';
        }cout<<endl;
    }
}