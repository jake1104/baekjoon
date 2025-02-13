#include <stdio.h>
#include <math.h>
int N;
int board[15];
int c;
bool g(int m,int n){
    for(int i=0;i<m;i++){
        if(board[i]==n||abs(board[i]-n)==abs(i-m))return false;
    }
    return true;
}
void f(int m){
    if (m==N){
        c++;
        return;
    }
    for (int i=0;i<N;i++){
        if (g(m,i)){
            board[m]=i;
            f(m+1);
        }
    }
}
int main(){
    scanf("%d", &N);
    f(0);
    printf("%d",c);
}
