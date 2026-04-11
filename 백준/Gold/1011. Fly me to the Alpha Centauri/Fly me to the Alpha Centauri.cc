#include<iostream>
#include<cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int T;cin>>T;while(T--){
        int x,y;cin>>x>>y;
        int l=y-x;
        int lx=sqrt(l),c=0;
        l-=lx*lx;c+=lx*2-1;
        while(l){c+=l/lx,l%=lx;lx=l;}
        c+=l;cout<<c<<'\n';
    }
}