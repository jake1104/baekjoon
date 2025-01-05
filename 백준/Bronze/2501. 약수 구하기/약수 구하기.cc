#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, K;
	scanf("%d %d", &N, &K);
	int t = 1, c = 1;
	while (c < K && t <= N) {
		t++;
		if (N % t == 0) {
			c++;
		}
	}
	if (t > N) {
		printf("0");
	}
	else {
		printf("%d", t);
	}
}