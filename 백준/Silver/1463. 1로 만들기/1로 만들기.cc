#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int min(int a, int b) {
	return a < b ? a : b;
}

int dp[3000001];

int main() {
	dp[1] = 0;
	for (int i = 2; i < 3000001; i++) {
		dp[i] = 1000000;
	}
	int N;
	scanf("%d", &N);
	int a = 1;
	while (a < N) {
		dp[a * 2] = min(dp[a] + 1, dp[a * 2]);
		dp[a * 3] = min(dp[a] + 1, dp[a * 3]);
		dp[a + 1] = min(dp[a] + 1, dp[a + 1]);
		a++;
	}
	printf("%d", dp[N]);
}