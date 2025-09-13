#include<iostream>
#include<vector>
using namespace std;
struct P{int cx,cy,r;};
int main(){
    int T;cin>>T;
    while(T--){
        int x1,y1,x2,y2,n;
        cin>>x1>>y1>>x2>>y2>>n;
        vector<P>p(n);
        for(int i=0;i<n;i++)cin>>p[i].cx>>p[i].cy>>p[i].r;
        int C=0;
        for (const auto&p:p) {
            bool si=(x1-p.cx)*(x1-p.cx)+(y1-p.cy)*(y1-p.cy)<p.r*p.r;
            bool ei=(x2-p.cx)*(x2-p.cx)+(y2-p.cy)*(y2-p.cy)<p.r*p.r;
            if (si!=ei)C++;
        }cout<<C<<endl;
    }
}