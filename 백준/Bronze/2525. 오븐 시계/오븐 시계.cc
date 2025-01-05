#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int h, m;
	scanf("%d %d", &h, &m);
	int t;
	scanf("%d", &t);
	h += t / 60;
	t %= 60;
	m += t;
	h += m / 60;
	m %= 60;
	h %= 24;
	printf("%d %d", h, m);
}