#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N;
int arr[25][25];
int c;
int h[500];
int dy[4] = { 0, -1, 0, 1 };
int dx[4] = { -1, 0, 1, 0 };
bool visited[25][25];

void dfs(int n, int m) {
	if (!visited[n][m] && arr[n][m] != 0) {
		visited[n][m] = true;
		if (arr[n][m] == -1) {
			arr[n][m] = c + 1;
			c++;
		}
		h[arr[n][m]]++;
		for (int i = 0; i < 4; i++) {
			if (0 <= n + dy[i] && n + dy[i] < N && 0 <= m + dx[i] && m + dx[i] < N) {
				if (arr[n + dy[i]][m + dx[i]] == -1)
					arr[n + dy[i]][m + dx[i]] = arr[n][m];
				dfs(n + dy[i], m + dx[i]);
			}
		}
	}
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &arr[i][j]);
			if (arr[i][j] == 1) {
				arr[i][j] = -1;
			}
		}
	}
	c = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			dfs(i, j);
	printf("%d\n", c);
	for (int i = 0; i < c; i++) {
		for (int j = 1; j < c; j++) {
			if (h[j] > h[j + 1]) {
				int temp = h[j];
				h[j] = h[j + 1];
				h[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < c - 1; i++) {
		printf("%d\n", h[i + 1]);
	}
	printf("%d", h[c]);
}