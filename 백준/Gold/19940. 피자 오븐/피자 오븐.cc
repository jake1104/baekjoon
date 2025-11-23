#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	int Ts[100];
	for (int i = 0; i < T; i++) {
		scanf("%d", &Ts[i]);
		int ADDH = 0;
		int ADDT = 0;
		int MINT = 0;
		int ADDO = 0;
		int MINO = 0;
		ADDH += Ts[i] / 60;
		Ts[i] %= 60;
		if (Ts[i] > 35) {
			ADDH++;
			Ts[i] -= 60;
		}
		printf("%d ", ADDH);
		if (Ts[i] > 0) {
			ADDT += Ts[i] / 10;
			Ts[i] %= 10;
			if (Ts[i] > 5) {
				ADDT++;
				Ts[i] -= 10;
			}
			printf("%d ", ADDT);
			if (Ts[i] > 0) {
				ADDO += Ts[i];
				printf("0 %d 0\n", ADDO);
			}
			else {
				MINO -= Ts[i];
				printf("0 0 %d\n", MINO);
			}
		}
		else {
			MINT -= Ts[i] / 10;
			Ts[i] %= 10;

			if (Ts[i] < -5) {
				MINT++;
				Ts[i] += 10;
			}
			printf("0 %d ", MINT);
			if (Ts[i] > 0) {
				ADDO += Ts[i];
				printf("%d 0\n", ADDO);
			}
			else {
				MINO -= Ts[i];
				printf("0 %d\n", MINO);
			}
		}
	}
}