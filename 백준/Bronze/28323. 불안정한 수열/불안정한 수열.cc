#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int A[300000];
int main() {
	int N;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	int len = 0;
	int len2 = 0;
	bool even = true;
	bool even2 = false;
	for (int i = 0; i < N; i++) {
		if (even) {
			if (A[i] % 2 == 0) {
				len++;
				even = false;
			}
		}
		else {
			if (A[i] % 2 == 1) {
				len++;
				even = true;
			}
		}
		if (even2) {
			if (A[i] % 2 == 0) {
				len2++;
				even2 = false;
			}
		}
		else {
			if (A[i] % 2 == 1) {
				len2++;
				even2 = true;
			}
		}
	}
	if (len > len2) {
		printf("%d", len);
	}
	else {
		printf("%d", len2);
	}
}