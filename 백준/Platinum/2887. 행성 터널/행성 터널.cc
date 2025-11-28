#include<bits/stdc++.h>
using namespace std;
struct Node{int x,y,z,i;};
struct Edge{int a,b,c;};
struct UF{
    vector<int>p;
    UF(int n):p(n){for(int i=0;i<n;i++)p[i]=i;}
    int find(int x){
        while(p[x]!=x){
            p[x]=p[p[x]];
            x=p[x];
        }return x;
    }bool uni(int a,int b){
        a=find(a);b=find(b);
        if(a==b)return 0;
        p[b]=a;return 1;
    }
};inline int cost(const Node&a,const Node&b){
    int t1=abs(a.x-b.x),t2=abs(a.y-b.y),t3=abs(a.z-b.z);
    int t=t1<t2?t1:t2;
    return t<t3?t:t3;
}int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N;cin>>N;
    vector<Node>I(N);
    for(int i=0;i<N;i++){
        cin>>I[i].x>>I[i].y>>I[i].z;
        I[i].i=i;
    }
    vector<Edge>G;
    G.reserve(3*N);
    auto add=[&](auto cmp){
        sort(I.begin(),I.end(),cmp);
        for(int i=0;i<N-1;i++){
            const Node&a=I[i];
            const Node&b=I[i+1];
            G.push_back({a.i,b.i,cost(a,b)});
        }
    };
    add([](const Node&a,const Node&b){return a.x<b.x;});
    add([](const Node&a,const Node&b){return a.y<b.y;});
    add([](const Node&a,const Node&b){return a.z<b.z;});
    sort(G.begin(),G.end(),[](const Edge&a,const Edge&b){return a.c<b.c;});
    UF uf(N);
    long long ans=0;
    int cnt=0;
    for(const auto&e:G){
        if(uf.uni(e.a,e.b)){
            ans+=e.c;
            if(++cnt==N-1)break;
        }
    }cout<<ans;
}