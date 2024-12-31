#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	queue<int> q;
	for (int i = 0; i < N; i++) {
		char input[100005];
		scanf("%s", input);
		if (strcmp(input, "push") == 0) {
			int X;
			scanf("%d", &X);
			q.push(X);
		}
		else if (strcmp(input, "front") == 0) {
			if (q.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", q.front());
			}
		}
		else if (strcmp(input, "back") == 0) {
			if (q.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", q.back());
			}
		}
		else if (strcmp(input, "pop") == 0) {
			if (q.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", q.front());
				q.pop();
			}
		}
		else if (strcmp(input, "empty") == 0) {
			printf("%d\n", q.empty());
		}
		else if (strcmp(input, "size") == 0) {
			printf("%d\n", q.size());
		}
	}
}