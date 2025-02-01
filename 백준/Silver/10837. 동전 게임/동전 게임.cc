#include <stdio.h>
#include <math.h>
int main() {
    int K,C;scanf("%d\n%d",&K,&C);
    for(int i=0;i<C;i++){
        int M,N;scanf("%d %d",&M,&N);
        int n=M>N?M:N; int d=abs(M-N);
        if(M==N)printf("1\n");
		else if(M<N)printf("%d\n",K+M-2*(N-1)>0);
		else printf("%d\n",K-2*(M-1)+N+1>0);
    }
}