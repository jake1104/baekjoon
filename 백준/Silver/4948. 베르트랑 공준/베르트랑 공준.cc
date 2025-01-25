#include <stdio.h>
#include <math.h>

int main() {
	int ns[250001];
	int num;
	int idx = 0;
	int m = 0;
	while (true) {
		scanf("%d", &num);
		if (num == 0) break;
		ns[idx] = num;
		m = num > m ? num : m;
		idx++;
	}
	bool arr[246913];
	for (int i = 0; i < m * 2; i++) {
		arr[i] = true;
	}
	for (int i = 2; i <= m * 2; i++) {
		if (arr[i]) {
			for (int j = i; j <= m * 2 / i; j++) {
				if (i * j <= m * 2) arr[i * j] = false;
			}
		}
	}
	for (int i = 0; i < idx; i++) {
		int c = 0;
		for (int j = ns[i] + 1; j <= ns[i] * 2; j++) {
			if (arr[j]) c++;
		}
		printf("%d\n", c);
	}
	
}