#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
typedef vector<vector<ll>>M;
M mul(M A,M B,int N){
    M C(N,vector<ll>(N,0));
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            for(int k=0;k<N;k++)
                C[i][j]=(C[i][j]+A[i][k]*B[k][j])%1000;
    return C;
}
M pow(M A,ll B,int N){
    M R(N,vector<ll>(N,0));
    for(int i=0;i<N;i++)R[i][i]=1;
    while(B>0){
        if(B%2)R=mul(R,A,N);
        A=mul(A,A,N);
        B/=2;
    }return R;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int N;ll B;cin>>N>>B;
    M A(N,vector<ll>(N));
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)cin>>A[i][j],A[i][j]%=1000;
    M R=pow(A,B,N);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<R[i][j];
            if(j<N-1)cout<<' ';
        }cout<<'\n';
    }
}