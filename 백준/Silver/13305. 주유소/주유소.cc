#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int d[100000];
	int c[100000];
	for (int i = 0; i < N - 1; i++) {
		scanf("%d", &d[i]);
	}
	for (int i = 0; i < N; i++) {
		scanf("%d", &c[i]);
	}
	int m = c[0] * d[0];
	int c1 = c[0];
	for (int i = 1; i < N - 1; i++) {
		if (c1 > c[i]) {
			c1 = c[i];
		}
		m += c1 * d[i];
	}
	printf("%d", m);
}