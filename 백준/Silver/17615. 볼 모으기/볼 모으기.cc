#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	char bs[500000];
	scanf("%s", bs);
	bool rc = false;
	bool bc = false;
	int r1 = 0;
	int b1 = 0;
	int r2 = 0;
	int b2 = 0;
	for (int i = 0; i < N; i++) {
		if (bs[i] == 'R') {
			rc = true;
		}
		if (rc) {
			if (bs[i] == 'B')
				r1++;
		}
		if (bs[i] == 'B') {
			bc = true;
		}
		if (bc) {
			if (bs[i] == 'R')
				b1++;
		}
	}
	rc = false;
	bc = false;
	for (int i = N - 1; i >= 0; i--) {
		if (bs[i] == 'R') {
			rc = true;
		}
		if (rc) {
			if (bs[i] == 'B')
				r2++;
		}
		if (bs[i] == 'B') {
			bc = true;
		}
		if (bc) {
			if (bs[i] == 'R')
				b2++;
		}
	}
	int b = b1 > b2 ? b2 : b1;
	int r = r1 > r2 ? r2 : r1;
	printf("%d", b > r ? r : b);
}