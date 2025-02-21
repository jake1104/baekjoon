#include<stdio.h>
int main(){
    int S[47];
    S[0]=0;
    for(int i=1;i<=46;i++)S[i]=S[i-1]+i;
    int N[1001];for(int i=0;i<=1000;i++)N[i]=0;
    for(int i=1;i<=46;i++){
        for(int j=1;j<=46;j++){
            for(int k=1;k<=46;k++){
                if(S[i]+S[j]+S[k]<=1000)N[S[i]+S[j]+S[k]]=1;
            }
        }
    }
    int T;scanf("%d",&T);
    for(int i=0;i<T;i++){
        int K;scanf("%d",&K);
        printf("%d\n",N[K]);
    }
}