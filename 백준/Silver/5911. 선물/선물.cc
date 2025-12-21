#include<iostream>
#include<algorithm>
using namespace std;
struct z{int x,y;};
bool x(z a,z b){return a.x<b.x;}
bool y(z a,z b){return a.y<b.y;}
bool f(z a,z b){return a.x-a.y<b.x-b.y;}
int main(){
    int N,B;cin>>N>>B;
    z p[N];for(int i=0;i<N;i++){
        int P,S;cin>>P>>S;
        p[i].x=P+S;
        p[i].y=P/2+P%2;
    }sort(p,p+N,x);
    int s=0,r=0;
    for(int i=0;i<N;i++){
        s+=p[i].x;
        if(s>B){r=i;break;}
    }sort(p,p+r,y);
    int l=B-s+p[r].x;
    sort(p+r,p+N,f);
    if(l+p[0].y>=p[r].x){cout<<r+1;return 0;}
    if(l+p[r].y>=p[r].x){cout<<r+1;return 0;}
    cout<<r;
}