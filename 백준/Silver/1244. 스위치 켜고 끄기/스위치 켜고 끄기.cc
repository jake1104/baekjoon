#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    int s;
    scanf("%d",&s);
    int I[2];
    for(int i=0;i<s;i++){
        scanf("%d %d",&I[0],&I[1]);
        if(I[0]==1){
            for(int j=I[1]-1;j<n;j+=I[1]){
                arr[j]=arr[j]==1?0:1;
            }
        } else{
            bool chk=true;
            arr[I[1]-1]=arr[I[1]-1]==1?0:1;
            for(int j=0;j<I[1];j++){
                if(I[1]-1-j>=0&&I[1]-1+j<n){
                    if(arr[I[1]-1-j]!=arr[I[1]-1+j])chk=false;
                    if(chk){
                        arr[I[1]-1-j]=arr[I[1]-1-j]==1?0:1;
                        arr[I[1]-1+j]=arr[I[1]-1+j]==1?0:1;
                    }
                }
            }
        }
    }
    for(int i=0;i*20<n;i++){
        for(int j=0;j<20;j++){
            if(i*20+j<n)printf("%d ",arr[i*20+j]);
        }
        printf("\n");
    }
}