#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stack>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	stack<int> s;
	for (int i = 0; i < N; i++) {
		int input;
		scanf("%d", &input);
		if (input == 1) {
			int x;
			scanf("%d", &x);
			s.push(x);
		}
		else if (input == 2) {
			if (s.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", s.top());
				s.pop();
			}
		}
		else if (input == 3) {
			printf("%d\n", s.size());
		}
		else if (input == 4) {
			printf("%d\n", s.empty());
		}
		else if (input == 5) {
			if (s.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", s.top());
			}
		}
	}
}