#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct node{int x,y,z,i;};
struct edge{int A,B,C;};
int abs(int x){return x<0?-x:x;}
int g(node a,node b){
    int t1=abs(a.x-b.x),t2=abs(a.y-b.y),t3=abs(a.z-b.z);
    int t=t1<t2?t1:t2;
    return t<t3?t:t3;
}struct UF{
    vector<int>p;
    UF(int n):p(n){for(int i=0;i<n;i++)p[i]=i;}
    int f(int x){return p[x]==x?x:p[x]=f(p[x]);}
    bool u(int a,int b){
        a=f(a);b=f(b);
        if(a==b)return 0;
        p[b]=a;return 1;
    }
};int main(){
    int N;cin>>N;
    vector<node>I(N);
    for(int i=0;i<N;i++){
        cin>>I[i].x>>I[i].y>>I[i].z;
        I[i].i=i;
    }vector<edge>G;G.reserve(3*N);
    auto add=[&](auto cmp){
        sort(I.begin(),I.end(),cmp);
        for(int i=0;i<N-1;i++){
            node a=I[i], b=I[i+1];
            G.push_back({a.i,b.i,g(a,b)});
        }
    };
    add([](node a,node b){return a.x<b.x;});
    add([](node a,node b){return a.y<b.y;});
    add([](node a,node b){return a.z<b.z;});
    sort(G.begin(),G.end(),[](edge a,edge b){return a.C<b.C;});
    UF uf(N);int m=0,cnt=0;
    for(auto&e:G){
        if(uf.u(e.A,e.B)){
            m+=e.C;
            if(++cnt==N-1)break;
        }
    }cout<<m;
}