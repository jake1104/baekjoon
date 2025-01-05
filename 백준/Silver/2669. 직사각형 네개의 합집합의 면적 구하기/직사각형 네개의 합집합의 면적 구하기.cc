#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int l[4][4];
	for (int i = 0; i < 4; i++) {
		scanf("%d %d %d %d", &l[i][0], &l[i][1], &l[i][2], &l[i][3]);
	}
	int p[101][101];
	int s = 0;
	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			p[i][j] = 0;
			for (int k = 0; k < 4; k++) {
				if (j < l[k][2] && j >= l[k][0] && i < l[k][3] && i >= l[k][1]) {
					p[i][j] = 1;
				}
			}
			if (p[i][j] == 1) {
				s++;
			}
		}
	}
	printf("%d", s);
}