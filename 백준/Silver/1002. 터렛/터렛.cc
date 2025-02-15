#include<stdio.h>
int main(){
    int T;scanf("%d",&T);
    for(int i=0;i<T;i++){
        int x1,y1,r1,x2,y2,r2;
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        int d=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
        int s=(r1+r2)*(r1+r2);
        if(d==0&&r1==r2)printf("-1\n");
        else if(d==0&&r1!=r2)printf("0\n");
        else if(d==s)printf("1\n");
        else if(d<(r1-r2)*(r1-r2))printf("0\n");
        else if(d==(r1-r2)*(r1-r2))printf("1\n");
        else if(d<s)printf("2\n");
        else printf("0\n");
    }
}