#include <bits/stdc++.h>
using namespace std;
struct P{
    double x,y;
    P operator-(P p)const{return{x-p.x,y-p.y};}
    double d(P p)const{return hypot(x-p.x,y-p.y);}
    double c(P p)const{return x*p.y-y*p.x;}
};struct C{
    P o; double r;
    bool in(P p)const{return o.d(p)<=r*(1+1e-14);}
};C dia(P a,P b){
    P o{(a.x+b.x)/2,(a.y+b.y)/2};
    return{o,max(o.d(a),o.d(b))};
}C cir(P a,P b,P c){
    double ox=(min({a.x,b.x,c.x})+max({a.x,b.x,c.x}))/2;
    double oy=(min({a.y,b.y,c.y})+max({a.y,b.y,c.y}))/2;
    double ax=a.x-ox,ay=a.y-oy;
    double bx=b.x-ox,by=b.y-oy;
    double cx=c.x-ox,cy=c.y-oy;
    double d=(ax*(by-cy)+bx*(cy-ay)+cx*(ay-by))*2;
    if(!d)return{{0,0},-1};
    double x=((ax*ax+ay*ay)*(by-cy)+(bx*bx+by*by)*(cy-ay)+(cx*cx+cy*cy)*(ay-by))/d;
    double y=((ax*ax+ay*ay)*(cx-bx)+(bx*bx+by*by)*(ax-cx)+(cx*cx+cy*cy)*(bx-ax))/d;
    P o{ox+x,oy+y};
    return{o,max({o.d(a),o.d(b),o.d(c)})};
}C mec(vector<P>v){
    shuffle(v.begin(),v.end(),mt19937(random_device{}()));
    C c{{0,0},-1};
    for(int i=0;i<v.size();i++){
        if(c.r<0||!c.in(v[i])){
            c={v[i],0};
            for(int j=0;j<=i;j++){
                if(!c.in(v[j])){
                    c=dia(v[i],v[j]);
                    for(int k=0;k<=j;k++){
                        if(!c.in(v[k])){
                            C t=cir(v[i],v[j],v[k]);
                            if(t.r>=0)c=t;
                        }
                    }
                }
            }
        }
    }return c;
}int main(){
    int N;cin>>N;
    vector<P>p(N);for(int i=0;i<N;i++)cin>>p[i].x>>p[i].y;
    C a=mec(p);cout<<fixed;cout.precision(3);cout<<a.o.x<<' '<<a.o.y<<'\n'<<a.r;
}