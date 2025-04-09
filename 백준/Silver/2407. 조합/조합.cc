#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    m=min(m,n-m);
    __uint128_t C[n+1][m+1];
    C[0][0]=1;
    for(int i=1;i<=n;i++){
        C[i][0]=1;
        for(int j=1;j<=m;j++)C[i][j]=C[i-1][j-1]+C[i-1][j];
    }
    __uint128_t x=C[n][m];
    if (x==0){
        cout<<"0";
        return 0;
    }
    string s;
    while(x>0){
        s+=(char)('0'+x%10);
        x/=10;
    }
    reverse(s.begin(),s.end());
    cout<<s;
}