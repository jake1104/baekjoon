#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int W, H, N;
	scanf("%d %d %d", &W, &H, &N);
	int P[1000][2];
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &P[i][0], &P[i][1]);
	}
	int c = 0;
	for (int i = 1; i < N; i++) {
		int rX = P[i][0] - P[i - 1][0];
		int rY = P[i][1] - P[i - 1][1];
		if (rX > 0 && rY > 0) {
			if (rX > rY) {
				c += rX;
			}
			else {
				c += rY;
			}
		}
		else if (rX < 0 && rY < 0) {
			if (rX > rY) {
				c += -rY;
			}
			else {
				c += -rX;
			}
		}
		else {
			c += abs(rY) + abs(rX);
		}
	}
	printf("%d", c);
}