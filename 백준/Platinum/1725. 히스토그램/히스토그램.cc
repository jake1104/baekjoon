#include<stdio.h>
long long h[100000];
long long f(long long s,long long e){
    if(s==e)return h[s];
    if(e-s==1){
        if(h[s]>h[e])return h[s]>2*h[e]?h[s]:2*h[e];
        else return 2*h[s]>h[e]?2*h[s]:h[e];
    }
    long long m=(s+e)/2;
    long long L=f(s,m);
    long long R=f(m+1,e);
    long long l=m-1,r=m+1;
    long long M=h[m],n=h[m];
    while(s<=l&&r<=e){
        if(h[l]<h[r]){
            if(h[r]<n)n=h[r];
            M=M>n*(r-l)?M:n*(r-l);
            r++;
        }else{
            if(h[l]<n)n=h[l];
            M=M>n*(r-l)?M:n*(r-l);
            l--;
        }
    }
    while(s<=l){
        if(h[l]<n)n=h[l];
        M=M>n*(r-l)?M:n*(r-l);
        l--;
    }
    while(r<=e){
        if(h[r]<n)n=h[r];
        M=M>n*(r-l)?M:n*(r-l);
        r++;
    }
    long long t=L>R?L:R;
    t=t>M?t:M;
    return t;
}
int main(){
    long long n;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)scanf("%lld",&h[i]);
    printf("%lld\n",f(0,n-1));
}