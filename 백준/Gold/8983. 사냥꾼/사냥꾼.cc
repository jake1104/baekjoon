#include<iostream>
#include<algorithm>
using namespace std;
struct l{int x,y;};
int M,N,L;
int p[100000];
bool f(l a){
    int l=0,r=M-1;
    while(l<=r){
        int m=(l+r)/2;
        if((p[m]-a.x>=0?p[m]-a.x:-p[m]+a.x)+a.y<=L)return 1;
        if(p[m]<a.x)l=m+1;
        else r=m-1;
    }return 0;
}
int main(){
    cin>>M>>N>>L;
    for(int i=0;i<M;i++)cin>>p[i];
    sort(p,p+M);
    l a[N];for(int i=0;i<N;i++)cin>>a[i].x>>a[i].y;
    int c=0;for(int i=0;i<N;i++)c+=f(a[i]);
    cout<<c;
}