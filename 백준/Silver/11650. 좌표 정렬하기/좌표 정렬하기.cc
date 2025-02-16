#include<stdio.h>
#include<algorithm>
using namespace std;
struct c{int x,y;};
bool f(c a,c b){
    if(a.x==b.x)return a.y<b.y;
    else return a.x<b.x;
}
int main(){
    int N;scanf("%d",&N);
    c I[100000];for(int i=0;i<N;i++)scanf("%d %d",&I[i].x,&I[i].y);
    sort(I,I+N,f);
    for(int i=0;i<N;i++)printf("%d %d\n",I[i].x,I[i].y);
}