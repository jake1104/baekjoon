#include<stdio.h>
#include<string.h>
int main(){
    char S[100];scanf("%s",S);
    int f[26];
    for(int i=0;i<26;i++)f[i]=-1;
    for(int i=0;i<strlen(S);i++){
        if(f[S[i]-97]==-1)f[S[i]-97]=i;
    }
    for(int i=0;i<26;i++)printf("%d ",f[i]);
}