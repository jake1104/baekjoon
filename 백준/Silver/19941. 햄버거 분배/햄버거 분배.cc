#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int min(int a, int b) {
	return a > b ? b : a;
}

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int N, K;
	scanf("%d %d", &N, &K);
	char s[20000];
	scanf("%s", &s);
	int c = 0;
	for (int i = 0; i < N; i++) {
		if (s[i] == 'P') {
			for (int j = max(0, i - K); j <= min((int)strlen(s) - 1, i + K); j++) {
				if (s[i] == 'P') {
					if (s[j] == 'H') {
						s[j] = 'h';
						s[i] = 'p';
						c++;
					}
				}
			}
		}
	}
	printf("%d", c);
}