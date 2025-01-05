#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int r = 0;
	for (int i = 0; i < N; i++) {
		int c[7] = { 0, 0, 0, 0, 0, 0, 0 };
		for (int j = 0; j < 4; j++) {
			int t;
			scanf("%d", &t);
			c[t]++;
		}
		int me = 0;
		for (int j = 1; j <= 6; j++) {
			if (c[me] == c[j] && c[j] == 2) {
				int t = 2000 + me * 500 + j * 500;
				r = r > t ? r : t;
			}
			me = c[me] > c[j] ? me : j;
			if (c[me] == c[j]) {
				me = me > j ? me : j;
			}
		}
		if (c[me] == 1) {
			int t = me * 100;
			r = r > t ? r : t;
		}
		if (c[me] == 2) {
			int t = 1000 + me * 100;
			r = r > t ? r : t;
		}
		if (c[me] == 3) {
			int t = 10000 + me * 1000;
			r = r > t ? r : t;
		}
		if (c[me] == 4) {
			int t = 50000 + me * 5000;
			r = r > t ? r : t;
		}
	}
	printf("%d", r);
}