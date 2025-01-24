#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    int Ts[100000];
    for (int i = 0; i < N; i++) {
        scanf("%d", &Ts[i]);
    }
    int m = -10000000;
    for (int i = 0; i <= N - K; i++) {
        int n = 0;
        for (int j = i; j < i + K; j++) {
            n += Ts[j];
        }
        m = m > n ? m : n;
    }
    printf("%d", m);
}