#include<stdio.h>
#define ABS(x) (((x)<0)?-(x):(x))
int N,Q;
long long a[200000],x[200000];
long long f(long long X){
    long long s=0;
    for(int i=0;i<N;i++)s+=a[i]*ABS(x[i]-X);
    return s;
}
int main(){
    scanf("%d %d",&N,&Q);
    for(int i=0;i<N;i++)scanf("%lld %lld",&a[i],&x[i]);
    long long q[Q];for(int i=0;i<Q;i++)scanf("%lld",&q[i]);
    for(int j=0;j<Q;j++)printf("%lld\n",f(q[j]));
}