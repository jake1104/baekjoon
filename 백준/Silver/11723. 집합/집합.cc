#include<stdio.h>
#include<string.h>
int main(){
    int M;scanf("%d", &M);
    char S[21]={0},c[10],x[10];
    while(M--){
        scanf("%s", c);
        if(strcmp(c,"add")==0){
            scanf("%s",x);
            S[x[0]-'0']=1;
        }else if(strcmp(c,"remove")==0){
            scanf("%s",x);
            S[x[0]-'0']=0;
        }else if(strcmp(c,"check")==0){
            scanf("%s",x);
            printf("%d\n",S[x[0]-'0']);
        }else if(strcmp(c,"toggle")==0){
            scanf("%s",x);
            S[x[0]-'0']^=1;
        }else if(strcmp(c,"all")==0){
            memset(S,1,sizeof(S));
        }else if(strcmp(c, "empty")==0){
            memset(S,0,sizeof(S));
        }
    }
}
