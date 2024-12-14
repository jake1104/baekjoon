#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, C;
	scanf("%d %d", &N, &C);
	int c[10000][2];
	int x = N;
	int y = N;
	int tx, ty;
	for (int i = 0; i < C; i++) {
		scanf("%d %d", &c[i][0], &c[i][1]);
		tx = c[i][0];
		ty = c[i][1];
		if (tx * y < ty * x) {
			y = ty;
		}
		else {
			x = tx;
		}
	}
	printf("%d", x * y);
}