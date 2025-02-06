#include<stdio.h>
#include<string.h>
int main(){
    int T;scanf("%d",&T);
    for(int i=0;i<T;i++){
        int p=0,c=0;
        char a[80];scanf("%s",a);
        for(int j=0;j<strlen(a);j++){
            if(a[j]=='O'){c++;p+=c;}
            else c=0;
        }
        printf("%d\n",p);
    }
}