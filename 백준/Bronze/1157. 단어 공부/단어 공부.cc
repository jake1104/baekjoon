#include<stdio.h>
#include<string.h>
int main(){
    int c[26]={0};
    char w;
    while(scanf("%c",&w)!=EOF)c[w-'a'<0?w-'A':w-'a']++;
    int m=0,l=0,h=0;
    for(int i=0;i<26;i++){
        if(m<c[i]){
            m=c[i];l=i;h=1;
        }else if(m==c[i])h++;
    }
    if(h>1)printf("?");
    else printf("%c",l+'A');
}