#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int I[3];I[0]=30000;I[1]=30000;I[2]=30000;
    while(!(I[0]==0&&I[1]==0&&I[2]==0)){
        if(I[0]!=30000&&I[1]!=30000&&I[2]!=30000){
            if(I[0]*I[0]+I[1]*I[1]==I[2]*I[2])printf("right\n");
            else printf("wrong\n");
        }
        scanf("%d %d %d",&I[0],&I[1],&I[2]);
        sort(I,I+3);
    }
}