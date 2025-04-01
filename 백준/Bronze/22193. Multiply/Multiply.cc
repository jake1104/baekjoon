#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char a[50000],b[50000];
    cin>>a>>b;
    int r[100000];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int t=(a[n-1-j]-'0')*(b[m-1-i]-'0');
            r[n+m-1-i-j]+=t;  
        }
    }
    for(int i=n+m-1;i>0;i--){
        r[i-1]+=r[i]/10;
        r[i]%=10; 
    }
    bool c=false;
    for(int i=0;i<n+m;i++){
        if(!c){
            if(r[i]!=0)c=true;
            else if(i==n+m-1)cout<<"0";
        }
        if(c)cout<<r[i];
    }
}