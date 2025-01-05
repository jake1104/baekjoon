#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	int K;
	scanf("%d %d", &N, &K);
	int M[1001][4];
	long S[1001];
	int Ki;
	for (int i = 0; i < N; i++) {
		scanf("%d %d %d %d", &M[i][0], &M[i][1], &M[i][2], &M[i][3]);
		S[i] = M[i][1] * 100000000 + M[i][2] * 10000 + M[i][3];
		if (M[i][0] == K) {
			Ki = i;
		}
	}
	int r = 1;
	for (int i = 0; i < N; i++) {
		if (S[i] > S[Ki]) {
			r++;
		}
	}
	printf("%d", r);
}