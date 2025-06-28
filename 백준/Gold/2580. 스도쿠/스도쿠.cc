#include<iostream>
using namespace std;
int b[10][10],R[10][10];
bool r[10][10],c[10][10],s[10][10],e;
int xyts(int x,int y){return(x+2)/3+((y-1)/3)*3;}
void f(int x,int y){
    if(e)return;
    if(b[x][y]){
        if(x==9&&y==9){
            for(int q=1;q<=9;q++){
                for(int p=1;p<=9;p++)cout<<R[p][q]<<' ';
                cout<<endl;
            }e=1;return;
        }return f(x%9+1,y+(x/9));
    }
    for(int i=1;i<=9;i++){
        if(!r[x][i]&&!c[y][i]&&!s[xyts(x,y)][i]){
            R[x][y]=i;r[x][i]=1;c[y][i]=1;s[xyts(x,y)][i]=1;
            if(x==9&&y==9){
                for(int q=1;q<=9;q++){
                    for(int p=1;p<=9;p++)cout<<R[p][q]<<' ';
                    cout<<endl;
                }e=1;return;
            }
            f(x%9+1,y+(x/9));
            R[x][y]=0;r[x][i]=0;c[y][i]=0;s[xyts(x,y)][i]=0;
        }
    }return;
}int main(){
    for(int j=1;j<=9;j++){for(int i=1;i<=9;i++){scanf("%1d",&b[i][j]);R[i][j]=b[i][j];r[i][j]=0;c[i][j]=0,s[i][j]=0;}}
    for(int j=1;j<=9;j++){
        for(int i=1;i<=9;i++){
            r[i][b[i][j]]=1;
            c[j][b[i][j]]=1;
            s[xyts(i,j)][b[i][j]]=1;
        }
    }e=0;f(1,1);
}