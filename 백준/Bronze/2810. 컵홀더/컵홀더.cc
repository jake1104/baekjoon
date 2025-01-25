#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	char c[50];
	scanf("%s", c);
	int lc = 0;
	bool cr = false;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		if (c[i] == 'L') {
			if (!cr) {
				cr = true;
				if (lc == i) {
					cnt++;
					lc += 2;
				} else {
					lc += 1;
				}
			}
			else {
				cr = false;
				lc++;
				cnt++;
			}
		}
		else {
			cnt++; 
			lc++;
		}
	}
	printf("%d", cnt);
}