#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	int C[10000][3];
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &C[i][0], &C[i][1], &C[i][2]);
	}
	int R, P;
	for (int i = 0; i < T; i++) {
		R = 1;
		P = C[i][2];
		while (!(P == C[i][0] || P == C[i][1])) {
			R++;
			if (R % 2 == 0) {
				P += R - 1;
			}
			else {
				P -= R - 1;
			}
		}
		printf("%d\n", R);
	}
}