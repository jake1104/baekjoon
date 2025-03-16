#include<stdio.h>
int main(){
    int s=0;
    for(int i=0;i<8;i++){
        char I[8];scanf("%s",I);
        for(int j=i%2;j<8;j+=2){
            if(I[j]=='F')s++;
        }
    }
    printf("%d",s);
}