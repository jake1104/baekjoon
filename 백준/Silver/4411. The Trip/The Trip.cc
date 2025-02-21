#include <stdio.h>
#include <math.h>
int main(){
    while(1){
        int n;
        scanf("%d",&n);
        if (!n)break;
        int I[1000],s=0;
        for (int i=0;i<n;i++){
            double t;
            scanf("%lf",&t);
            I[i]=(int)round(t*100);
            s+=I[i];
        }
        int v=s/n,r=s%n,a=0;
        for(int i=0;i<n;i++){
            if(I[i]>v){ 
                a+=I[i]-v-(r>0); 
                if(r>0) r--;
            }
        }
        printf("$%.2f\n",a/100.0);
    }
}