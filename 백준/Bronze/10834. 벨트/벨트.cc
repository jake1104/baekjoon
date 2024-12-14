#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int M;
	scanf("%d", &M);
	int B[1000][3];
	int d = 0;
	int s = 1;
	for (int i = 0; i < M; i++) {
		scanf("%d %d %d", &B[i][0], &B[i][1], &B[i][2]);
		d = (d + B[i][2]) % 2;
		s = (s / B[i][0]) * B[i][1];
	}
	printf("%d %d", d, s);
}