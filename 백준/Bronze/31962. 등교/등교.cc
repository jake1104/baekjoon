#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, X;
	scanf("%d %d", &N, &X);
	int S[100];
	int T[100];
	int s[100];
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &S[i], &T[i]);
		s[i] = S[i] + T[i];
	}
	S[N + 1] = 0;
	T[N + 1] = 101;
	int li = N + 1;
	bool c = false;
	for (int i = 0; i < N; i++) {
		if (s[i] <= X) {
			if (S[i] > S[li]) {
				li = i;
				c = true;
			}
		}
	}
	if (c) {
		printf("%d", S[li]);
	}
	else {
		printf("-1");
	}
}