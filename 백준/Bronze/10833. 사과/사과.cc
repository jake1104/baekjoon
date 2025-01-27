#include <stdio.h>
int main() {int N; scanf("%d",&N);int a,b,c=0;for(int i=0;i<N;i++){scanf("%d %d",&a,&b);c+=b%a;}printf("%d",c);}