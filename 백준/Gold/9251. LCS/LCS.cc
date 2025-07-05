#include<iostream>
#include<string.h>
using namespace std;
int max(int a,int b){return a>b?a:b;}
int main(){
    char A[1001],B[1001];cin>>A>>B;
    int a=strlen(A),b=strlen(B);
    int S[a+1][b+1];for(int i=0;i<=a;i++){for(int j=0;j<=b;j++)S[i][j]=0;}
    int M=0;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(A[i-1]==B[j-1])S[i][j]=S[i-1][j-1]+1;
            else S[i][j]=max(S[i-1][j],S[i][j-1]);
            M=max(M,S[i][j]);
        }
    }cout<<M;
}