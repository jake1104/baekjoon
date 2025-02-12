#include<stdio.h>
#include<string.h>
int main(){
    int T;scanf("%d",&T);
    for(int i=0;i<T;i++){
        char I[50];scanf("%s",I);
        int c=0;bool chk=true;
        for(int j=0;j<strlen(I);j++){
            if(I[j]=='(')c++;
            if(I[j]==')')c--;
            if(c<0)chk=false;
        }
        if(c==0&&chk)printf("YES\n");
        else printf("NO\n");
    }
}