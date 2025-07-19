#include<iostream>
using namespace std;
int main(){
    string I;cin>>I;
    int n[13],s=0,x=-1;for(int i=0;i<13;i++){
        n[i]=I[i]=='*'?-1:I[i]-'0';
        s+=(n[i]>-1)*n[i]*(i&1?3:1);
        x=n[i]==-1?i:x;
    }s=(10-(s%10))%10;
    if(x&1)cout<<s*7%10;
    else cout<<s;
}