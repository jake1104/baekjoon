#include<stdio.h>
#include<queue>
using namespace std;
typedef struct{long long p,d;} Node;
int main(){
    long long L, N, K;
    scanf("%lld %lld %lld", &L, &N, &K);
    long long A[N];
    for(long long i=0;i<N; i++) scanf("%lld", &A[i]);
    bool V[L+1]={false};
    queue<Node> q;
    for(long long i=0;i<N;i++){
        q.push((Node){A[i],0});
        V[A[i]]=true;
    }
    long long r[K];
    int c=0;
    while(!q.empty()&&c<K){
        Node n = q.front(); q.pop();
        if(c<K)r[c++]=n.d;
        if(n.p>0&&!V[n.p-1]){
            V[n.p-1]=true;
            q.push((Node){n.p-1,n.d+1});
        }
        if(n.p<L&&!V[n.p+1]){
            V[n.p+1]=true;
            q.push((Node){n.p+1,n.d+1});
        }
    }
    for(int i=0;i<K;i++)printf("%lld\n", r[i]);
}