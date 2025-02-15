#include<stdio.h>
int main(){
    int N;scanf("%d",&N);
    long long C[250000],cnt=0,idx=0;
    for (int i=0;i<N;i++){
        scanf("%lld",&C[i]);
        cnt+=C[i];
        idx=C[i]>C[idx]?i:idx;
    }
    long long c=0;
    for(int i=idx;i<idx+N;i++){
        if(C[i%N]>0){cnt+=(c+1)/2;c=0;}
        else c++;
    }
    cnt+=(c+1)/2;
    if(C[idx]==0&&C[(idx+N-1)%N]==0&&c&1==1)cnt--;
    printf("%lld", cnt);
}