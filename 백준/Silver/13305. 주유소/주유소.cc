#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long N;
	scanf("%lld", &N);
	long long d[100000];
	long long c[100000];
	for (long long i = 0; i < N - 1; i++) {
		scanf("%lld", &d[i]);
	}
	for (long long i = 0; i < N; i++) {
		scanf("%lld", &c[i]);
	}
	long long m = c[0] * d[0];
	long long c1 = c[0];
	for (long long i = 1; i < N - 1; i++) {
		if (c1 > c[i]) {
			c1 = c[i];
		}
		m += c1 * d[i];
	}
	printf("%lld", m);
}