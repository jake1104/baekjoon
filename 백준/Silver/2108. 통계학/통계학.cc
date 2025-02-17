#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    int N;scanf("%d",&N);
    int I[500000];int S=0;int c[8001];
    for(int i=0;i<8001;i++)c[i]=0;
    int min=4000,max=-4000;
    for(int i=0;i<N;i++){
        scanf("%d",&I[i]);
        min=min<I[i]?min:I[i];
        max=max>I[i]?max:I[i];
        S+=I[i];c[I[i]+4000]++;
    }
    printf("%d\n",(int)round((float)S/N));
    sort(I,I+N);
    printf("%d\n",I[N/2]);
    int m = -1;
    for(int i = min; i <= max; i++){
        if (m < c[i + 4000]){
            m = c[i + 4000];
        }
    }

    int f=-4001,s=-4001;
    for(int i=min;i<=max;i++){
        if(c[i + 4000]==m){
            if(f==-4001)f=i;
            else if(s==-4001){
                s=i;
                break;
            }
        }
    }
    printf("%d\n", (s == -4001) ? f : s);
    printf("%d\n",max-min);
}