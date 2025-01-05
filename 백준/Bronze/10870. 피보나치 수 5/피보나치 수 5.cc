#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int dp[100];

int fibo(int n) {
	if (dp[n] == -1) {
		dp[n] = fibo(n - 1) + fibo(n - 2);
		return fibo(n - 1) + fibo(n - 2);
	}
	else {
		return dp[n];
	}
}

int main() {
	for (int i = 1; i < 21; i++) {
		dp[i] = -1;
	}
    dp[0] = 0;
	dp[1] = 1;
	int n;
	scanf("%d", &n);
	printf("%d", fibo(n));
}