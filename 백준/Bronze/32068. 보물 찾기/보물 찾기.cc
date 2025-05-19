#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	int C[10000][3];
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &C[i][0], &C[i][1], &C[i][2]);
	}
	int LR, RR;
	for (int i = 0; i < T; i++) {
		LR = (C[i][2] - C[i][0]) * 2 + 1;
		RR = (C[i][1] - C[i][2]) * 2;
		if (LR > RR) {
			printf("%d\n", RR);
		}
		else {
			printf("%d\n", LR);
		}
	}
}