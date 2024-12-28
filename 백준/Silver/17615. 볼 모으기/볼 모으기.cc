#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	char bs[500000];
	scanf("%s", bs);
	bool rc = false;
	bool bc = false;
	int r = 0;
	int b = 0;
	int rr = 0;
	int rb = 0;
	for (int i = N - 1; i >= 0; i--) {
		if (bs[i] == 'R') {
			rc = true;
		}
		if (rc) {
			if (bs[i] == 'B')
				r++;
		}
		if (bs[i] == 'B') {
			bc = true;
		}
		if (bc) {
			if (bs[i] == 'R')
				b++;
		}
	}
	printf("%d", b > r ? r : b);
}