#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int N;scanf("%d",&N);
    int I[51];
    for(int i=0;i<N;i++){
        scanf("%d",&I[i]);
    }
    sort(I,I+N);
    printf("%d",I[0]*I[N-1]);
}