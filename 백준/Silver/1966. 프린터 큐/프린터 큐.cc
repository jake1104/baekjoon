#include<stdio.h>
#include<queue>
#include<algorithm>
using namespace std;
struct a{int n,s;};
bool f(int a,int b){return a>b;}
int main(){
    int T;scanf("%d",&T);
    for(int i=0;i<T;i++){
        int N,M;scanf("%d %d",&N,&M);
        queue<a> q;
        int I[100];
        for(int j=0;j<N;j++){
            scanf("%d",&I[j]);
            a t;t.n=j;t.s=I[j];
            q.push(t);
        }
        sort(I,I+N,f);
        int c=0;
        while (!q.empty()) {
            if(q.front().s==I[c]){
                c++;
                if(q.front().n==M)break;
                q.pop();
            }else{
                q.push(q.front());
                q.pop();
            }
        }
        printf("%d\n",c);
    }
}