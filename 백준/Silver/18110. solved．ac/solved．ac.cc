#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    int n;scanf("%d",&n);
    if(n==0){
        printf("0");
        return 0;
    }else{
        int I[300000];for(int i=0;i<n;i++)scanf("%d",&I[i]);
        int S=0,N=0;
        sort(I,I+n);
        int s=(int)round((double)n*0.15);
        int e=n-s;
        for(int i=s;i<e;i++){
            S+=I[i];
            N++;
        }
        printf("%d",(int)round((double)S/N));
    }
}