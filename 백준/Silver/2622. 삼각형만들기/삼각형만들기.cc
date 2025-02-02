#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c=0;
    for(int i=1;i<n/3+1;i++){
        for(long j=i;j<=(n-i>i?n-i:i);j++){
            bool chk=true;
            int k=n-i-j;
            if(k>=j&&k<i+j)c++;
        }
    }
    printf("%d",c);
}