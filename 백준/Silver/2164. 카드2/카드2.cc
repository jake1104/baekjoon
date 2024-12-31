#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <queue>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	queue<int> q;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	bool o = false;
	int last;
	while (!q.empty()) {
		last = q.front();
		q.pop();
		if (o) {
			q.push(last);
		}
		o = !o;
	}
	printf("%d", last);
}