#include<stdio.h>
int main(){
    int N;scanf("%d",&N);
    int a2=0,a5=0;
    for(int i=1;i<=N;i++){
        int t=i;
        while(t%2==0){a2++;t/=2;}
        while(t%5==0){a5++;t/=5;}
    }
    printf("%d",a2<a5?a2:a5);
}