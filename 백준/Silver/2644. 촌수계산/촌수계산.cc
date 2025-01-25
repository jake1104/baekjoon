#include <stdio.h>

int n;
int a, b;
bool v[101];
bool r[101][100];

int f(int t, int c) {
	if (!v[t]) {
		v[t] = true;
		if (t == b) {
			return c;
		}
		int m = 101;
		for (int i = 1; i <= n; i++) {
			int n;
			if (r[t][i]) {
				n = f(i, c + 1);
				m = m < n ? m : n;
			}
			else if (r[i][t]) {
				n = f(i, c + 1);
				m = m < n ? m : n;
			}
		}
		return m;
	}
	return 101;
}

int main() {
	scanf("%d", &n);
	scanf("%d %d", &a, &b);
	int t;
	scanf("%d", &t);
	int xs[101], ys[101];
	for (int i = 1; i <= t; i++) {
		scanf("%d %d", &xs[i], &ys[i]);
		r[xs[i]][ys[i]] = true;
	}
	for (int i = 1; i <= n; i++) v[i] = false;
	int n = f(a, 0);
	printf("%d", n != 101 ? n : -1);
}