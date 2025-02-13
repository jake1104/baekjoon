#include<stdio.h>
int main(){
    int N;scanf("%d",&N);
    int V[500001];V[N]=0;for(int i=0;i<N;i++)scanf("%d",&V[i]);
    long S=0,M,m=-1;
    int i=N;int j=1;
    while(i>=0){
        j=j<V[i]?j:V[i];
        S+=j;
        i--;j++;
    }
    printf("%ld",S);
}