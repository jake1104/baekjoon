#include <stdio.h>

int N, M;
int V[100];
int DP[100];

int fibo(int n) {
    if (DP[n] != 0) return DP[n];
    else {
        DP[n] = fibo(n - 1) + fibo(n - 2);
        return DP[n];
    }
}

int main() {
	scanf("%d", &N);
	scanf("%d", &M);
	for (int i = 0; i < N; i++) {
		V[i] = true;
	}
	int Vs[100];
	for (int i = 1; i <= N; i++) {
		V[i] = false;
	}
	for (int i = 0; i < M; i++) {
		scanf("%d", &Vs[i]);
		V[Vs[i]] = true;
	}
	int init[100];
	for (int i = 1; i <= N; i++) {
		init[i] = 0;
	}
    for (int i = 1; i <= 21; i++) {
        DP[i] = 0;
    }
    DP[0] = 1;
    DP[1] = 1;
    DP[2] = 2;
    int t = 0;
    int m = 1;
    V[N + 1] = true;
    for (int i = 1; i <= N + 1; i++) {
        if (!V[i]) t++;
        else {
            m *= fibo(t);
            t = 0;
        }
    }
	printf("%d", m);
}