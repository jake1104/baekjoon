#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int a[4][2];
	for (int i = 0; i < 4; i++) {
		scanf("%d %d", &a[i][0], &a[i][1]);
	}
	int p = 0;
	int m = 0;
	for (int i = 0; i < 4; i++) {
		p -= a[i][0];
		p += a[i][1];
		if (p > m) {
			m = p;
		}
	}
	printf("%d", m);
}