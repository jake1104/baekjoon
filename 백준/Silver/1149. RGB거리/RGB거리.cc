#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int min(int a, int b) {
	return a > b ? b : a;
}

int main() {
	int N;
	scanf("%d", &N);
	int l[1000][3];
	for (int i = 0; i < N; i++) {
		scanf("%d %d %d", &l[i][0], &l[i][1], &l[i][2]);
	}
	int dp[3][1000];
	dp[0][0] = l[0][0];
	dp[1][0] = l[0][1];
	dp[2][0] = l[0][2];
	for (int i = 1; i < N; i++) {
		dp[0][i] = l[i][0] + min(dp[1][i - 1], dp[2][i - 1]);
		dp[1][i] = l[i][1] + min(dp[0][i - 1], dp[2][i - 1]);
		dp[2][i] = l[i][2] + min(dp[0][i - 1], dp[1][i - 1]);
	}
	printf("%d", min(dp[0][N - 1], min(dp[1][N - 1], dp[2][N - 1])));
}