#include <stdio.h>
#include <string.h>
int main() {
    char a[50];scanf("%s",a);char l=a[0];int c=10;
    for(int i=1;i<strlen(a);i++){if(a[i]==l){c+=5;}else{c+=10;l=l==')'?'(':')';}}
    printf("%d",c);
}