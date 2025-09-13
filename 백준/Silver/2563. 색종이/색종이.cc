#include<iostream>
using namespace std;
int main(){
    int N;cin>>N;
    bool D[100][100]={0,};
    for(int i=0;i<N;i++){
        int x,y;cin>>x>>y;
        for(int j=x-1;j<x+9;j++)
            for(int k=y-1;k<y+9;k++)D[j][k]=1;
    }int s=0;
    for(int i=0;i<100;i++)for(int j=0;j<100;j++)s+=D[i][j];
    cout<<s;
}