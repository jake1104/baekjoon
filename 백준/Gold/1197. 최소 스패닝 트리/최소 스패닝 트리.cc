#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct edge{int A,B,C;};
vector<bool>st;
vector<edge>graph;
bool f(edge x,edge y){
    return x.C<y.C;
}int main(){
    int V,E;cin>>V>>E;for(int i=0;i<V;i++)st.push_back(0);
    st[0]=1;for(int i=0;i<E;i++){
        edge t;cin>>t.A>>t.B>>t.C;t.A--,t.B--;
        graph.push_back(t);
    }sort(graph.begin(),graph.end(),f);int m=0,c=0;
    while(!graph.empty()){
        if(c>=graph.size())break;
        edge t=graph[c];
        if(st[t.A]^st[t.B]){
            graph.erase(graph.begin()+c);
            c=0;
            m+=t.C;
            st[t.A]=1;
            st[t.B]=1;
        }else c++;
    }cout<<m;
}