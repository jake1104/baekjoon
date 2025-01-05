#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int nh, nm, ns;
	scanf("%d %d %d", &nh, &nm, &ns);
	int t;
	scanf("%d", &t);
	int h, m, s;
	h = nh;
	m = nm;
	s = ns;
	h += (int)(t - t % 3600) / 3600;
	t %= 3600;

	m += (int)(t - t % 60) / 60;
	t %= 60;

	s += t;
	
	m += (int)(s - s % 60) / 60;
	s %= 60;
	h += (int)(m - m % 60) / 60;
	m %= 60;

	h %= 24;

	printf("%d %d %d", h, m, s);
}