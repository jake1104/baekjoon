#include<stdio.h>
int p(int n){
    int a=1;
    for(int i=0;i<n;i++)a*=10;
    return a;
}
bool f(int n){
    int a=0;
    int b=n;
    for(int i=1;i<=8;i++){a+=n%p(i)/p(i-1);b-=b%p(i);}
    return n%a==0;
}
int main(){
    int N,c=0;scanf("%d",&N);
    for(int i=1;i<=N;i++){if(f(i))c++;}
    printf("%d",c);
}