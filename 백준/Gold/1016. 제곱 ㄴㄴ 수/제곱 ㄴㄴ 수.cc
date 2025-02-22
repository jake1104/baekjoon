#include<stdio.h>
int main(){
    long long m,M;scanf("%lld %lld",&m,&M);
    bool s[M-m+1];for(long long i=m;i<=M;i++)s[i-m]=true;
    bool p[M-m+1];for(long long i=m;i<=M;i++)p[i-m]=true;
    for(long long i=2;i*i<=M;i++){
        if(m<=i){
            if(!p[i-m])continue;
            for(long long j=2;i*j<=M;j++)p[i*j-m]=false;
        }
        long long t=i*i;
        for(long long j=m/t+(m%t>0);t*j<=M;j++)s[t*j-m]=false;
    }
    long long c=0;
    for(long long i=m;i<=M;i++){
        if(s[i-m])c++;
    }
    printf("%lld",c);
}