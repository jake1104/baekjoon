#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int c;
    scanf("%d",&c);
    int V[100];
    int H[100];
    int v=0,h=0;
    for(int i=0;i<c;i++){
        int i1,i2;
        scanf("%d %d",&i1,&i2);
        if(i1==0){V[v]=i2;v++;}
        if(i1==1){H[h]=i2;h++;}
    }
    V[v]=0;V[v+1]=m;v+=2;
    H[h]=0;H[h+1]=n,h+=2;
    sort(V,V+v);
    sort(H,H+h);
    int Vm=0;
    int Hm=0;
    for(int i=1;i<v;i++){
        Vm=Vm>V[i]-V[i-1]?Vm:V[i]-V[i-1];
    }
    for(int i=1;i<h;i++){
        Hm=Hm>H[i]-H[i-1]?Hm:H[i]-H[i-1];
    }
    printf("%d",Vm*Hm);
}