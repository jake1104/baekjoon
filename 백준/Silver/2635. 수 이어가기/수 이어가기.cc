#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	int ml[30000] = { num, };
	int m = 0;
	int l[30000];
	int idx;
	for (int i = 0; i <= num; i++) {
		l[0] = num;
		l[1] = i;
		int t = num - i;
		idx = 2;
		while (t >= 0) {
			l[idx] = t;
			idx++;
			t = l[idx - 2] - l[idx - 1];
		}
		if (m < idx) {
			m = idx;
			for (int i = 0; i < idx; i++) {
				ml[i] = l[i];
			}
		}
	}
	printf("%d\n", m);
	for (int i = 0; i < m; i++) {
		printf("%d ", ml[i]);
	}
}