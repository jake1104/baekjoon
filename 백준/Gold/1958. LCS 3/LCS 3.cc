#include<iostream>
#include<string.h>
using namespace std;
int max(int a,int b){return a>b?a:b;}
int main(){
    char A[101],B[101],C[101];cin>>A>>B>>C;
    int a=strlen(A),b=strlen(B),c=strlen(C);
    int S[a+1][b+1][c+1];for(int i=0;i<=a;i++){for(int j=0;j<=b;j++){for(int k=0;k<=c;k++)S[i][j][k]=0;}}
    int M=0;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                if(A[i-1]==B[j-1]&&B[j-1]==C[k-1])S[i][j][k]=S[i-1][j-1][k-1]+1;
                else S[i][j][k]=max(max(S[i-1][j][k],S[i][j-1][k]),S[i][j][k-1]);
                M=max(M,S[i][j][k]);
            }
        }
    }cout<<M;
}