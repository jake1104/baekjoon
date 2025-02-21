#include<stdio.h>
#include<string.h>
#define r 31
#define M 1234567891
long long p(int a,int b){
    long long s=1;
    for(int i=0;i<b;i++){
        s*=a;
        s%=M;
    }
    return s;
}
int main(){
    int l;scanf("%d",&l);
    char I[50];scanf("%s",I);
    long long s=0;
    for(int i=0;i<strlen(I);i++){
        s+=(I[i]-'a'+1)*p(r,i)%M;
        s%=M;
    }
    printf("%lld",s);
}