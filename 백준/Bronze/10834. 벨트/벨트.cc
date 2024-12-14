#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int M;
	scanf("%d", &M);
	int B[1000][2];
	bool d = true;
	int a = 1;
	int b = 1;
	for (int i = 0; i < M; i++) {
		scanf("%d %d %d", &B[i][0], &B[i][1], &B[i][2]);
		if (B[i][2] == 1) {
			d = !d;
		}
		a *= B[i][0];
		b *= B[i][1];
	}
	if (d) {
		printf("0 ");
	}
	else {
		printf("1 ");
	}
	printf("%d", (int)b / a);
}