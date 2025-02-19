#include<stdio.h>
int main(){
    long double x,y;scanf("%Lf %Lf",&x,&y);
    int N;scanf("%d",&N);
    for(int i=0;i<N;i++){
        long double z;char q;scanf("%Lf %c",&z,&q);
        if(q=='A')printf("%Lf\n",z*y/x);
        if(q=='B')printf("%Lf\n",z*x/y);
    }
}