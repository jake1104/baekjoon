#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int A[250001];
	int cnt = 0;
	int idx = 1;
	for (int i = 1; i <= N; i++) {
		scanf("%d", &A[i]);
		if (A[i] == idx) idx++;
		else cnt++;
	}
	printf("%d", cnt);
}