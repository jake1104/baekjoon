#include<stdio.h>
int main(){
    int H,W;scanf("%d %d",&H,&W);
    int I[W],c=0;
    for(int i=0;i<W;i++)scanf("%d",&I[i]);
    for(int i=1;i<W-1;i++){
        int l=0,r=0;
        for(int j=0;j<i;j++)l=l>I[j]?l:I[j];
        for(int j=W-1;j>i;j--)r=r>I[j]?r:I[j];
        int m=(l<r?l:r)-I[i];
        c+=0>m?0:m;
    }
    printf("%d",c);
}