#include<stdio.h>
int main(){
    int N,L;scanf("%d %d",&N,&L);
    int P[10000][2];
    bool V[10000];
    for(int i=0;i<N;i++){
        scanf("%d %d",&P[i][0],&P[i][1]);
        V[i]=true;
    };
    for(int i=0;i<N;i++){
        for(int j=1;j<N-i;j++){
            if(P[j-1][0]>P[j][0]){
                int t0=P[j-1][0];int t1=P[j-1][1];
                P[j-1][0]=P[j][0];P[j-1][1]=P[j][1];
                P[j][0]=t0;P[j][1]=t1;
            }
        }
    }
    int c=0;
    for(int i=0;i<N;i++){
        c+=(P[i][1]-P[i][0])/L;
        P[i][0]+=((P[i][1]-P[i][0])/L)*L;
        if(P[i][0]>=P[i][1])V[i]=false;
        while(V[i]){
            c++;
            int o=P[i][0]+L;
            for(int j=i;j<N;j++){
                P[j][0]=P[j][0]>o?P[j][0]:o;
                if(P[j][0]>=P[j][1])V[j]=false;
            }
        }
    }
    printf("%d",c);
}