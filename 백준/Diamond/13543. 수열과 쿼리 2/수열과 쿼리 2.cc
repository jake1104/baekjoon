#include<iostream>
#include<vector>
#include<stack>
#include<cstdlib>
#include<ctime>
using namespace std;
struct Node{
    uint32_t val;
    int pri,l,r,size;
    uint32_t sum[11];
    Node(uint32_t v):val(v),pri(rand()),l(-1),r(-1),size(1){
        for(int t=0;t<=10;++t)sum[t]=v;
    }
};
vector<Node>tree;
stack<int>fi;
int C[11][11];
void precompute_binomial(){
    for(int n=0;n<=10;++n){
        C[n][0]=C[n][n]=1;
        for(int k=1;k<n;++k)C[n][k]=C[n-1][k-1]+C[n-1][k];
    }
}
int new_node(uint32_t val){
    if(!fi.empty()){
        int idx=fi.top();
        fi.pop();
        tree[idx]=Node(val);
        return idx;
    }
    tree.emplace_back(val);
    return tree.size()-1;
}
void update(int idx){
    if(idx==-1)return;
    Node& node=tree[idx];
    int li=node.l,ri=node.r;
    int ls=(li==-1)?0:tree[li].size;
    int rs=(ri==-1)?0:tree[ri].size;
    node.size=1+ls+rs;
    uint32_t l_sum[11]={0};
    if(li!=-1)for(int t=0;t<=10;++t)l_sum[t]=tree[li].sum[t];
    uint32_t r_sum[11]={0};
    if(ri!=-1)for(int t=0;t<=10;++t)r_sum[t]=tree[ri].sum[t];
    int L=ls;
    uint32_t pow_L_plus_1[11];
    pow_L_plus_1[0]=1;
    for(int e=1;e<=10;++e)pow_L_plus_1[e]=pow_L_plus_1[e-1]*(L+1);
    for(int t=0;t<=10;++t){
        uint32_t cur_sum=l_sum[t];
        cur_sum+=node.val*pow_L_plus_1[t];
        for(int k=0;k<=t;++k)cur_sum+=C[t][k]*pow_L_plus_1[t-k]*r_sum[k];
        node.sum[t]=cur_sum;
    }
}
void split(int cur_idx,int s,int& li,int& ri){
    if(cur_idx==-1){
        li=ri=-1;
        return;
    }
    Node&cur=tree[cur_idx];
    int ls=(cur.l==-1)?0:tree[cur.l].size;
    if(s<=ls){
        split(cur.l,s,li,cur.l);
        update(cur_idx);
        ri=cur_idx;
    }else{
        split(cur.r,s-ls-1,cur.r,ri);
        update(cur_idx);
        li=cur_idx;
    }
}
int merge(int a_idx,int b_idx){
    if(a_idx==-1)return b_idx;
    if(b_idx==-1)return a_idx;
    Node& a=tree[a_idx],&b=tree[b_idx];
    if(a.pri>b.pri){
        a.r=merge(a.r,b_idx);
        update(a_idx);
        return a_idx;
    }else{
        b.l=merge(a_idx,b.l);
        update(b_idx);
        return b_idx;
    }
}
int main(){
    precompute_binomial();
    srand(time(0));
    int N;cin>>N;
    int root=-1;
    for(int i=0;i<N;++i){
        uint32_t v;cin>>v;
        root=merge(root,new_node(v));
    }
    int M;cin>>M;
    while(M--){
        int type;cin>>type;
        if(type==1){
            int p;uint32_t v;cin>>p>>v;
            int a,b;
            split(root,p,a,b);
            root=merge(merge(a,new_node(v)),b);
        }else if(type==2){
            int p;cin>>p;
            int a,b,c;
            split(root,p,a,b);
            split(b,1,b,c);
            fi.push(b);
            root=merge(a,c);
        }else if(type==3){
            int p;
            uint32_t v;cin>>p>>v;
            int a,b,c;
            split(root,p,a,b);
            split(b,1,b,c);
            fi.push(b);
            root=merge(merge(a,new_node(v)),c);
        }else{
            int l,r,k;cin>>l>>r>>k;
            int a,b,c;
            split(root,l,a,b);
            split(b,r-l+1,b,c);
            cout<<(b==-1?0:tree[b].sum[k])<<'\n';
            root=merge(merge(a,b),c);
        }
    }
    return 0;
}