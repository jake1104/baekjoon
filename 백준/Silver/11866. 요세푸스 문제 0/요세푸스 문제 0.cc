#include<stdio.h>
bool f(bool a[1000],int n){
    bool chk=false;
    for(int i=0;i<n;i++)chk=chk||a[i];
    return chk;
}
int main(){
    int N,K;scanf("%d %d",&N,&K);
    bool a[1000];for(int i=0;i<N;i++)a[i]=true;
    int n=K-1;
    a[n]=false;
    printf("<%d",n+1);
    while(f(a,N)){
        for(int i=0;i<K;i++){
            n++;n%=N;
            while(!a[n]){n++;n%=N;}
        }
        printf(", %d",n+1);
        a[n]=false;
    }
    printf(">");
}