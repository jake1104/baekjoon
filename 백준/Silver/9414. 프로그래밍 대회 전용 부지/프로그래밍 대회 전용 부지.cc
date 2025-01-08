#include <stdio.h>
#include <algorithm>

long long pow(long long a, long long n) {
    long long c = 1;
    for (int i = 0; i < n; i++) {
        c *= a;
    }
    return c;
}

int main() {
    int T;
    scanf("%d", &T);
    long long L[10][40];
    int lens[10];
    int zero_count = 0;
    int idx = 0;
    while (zero_count < T) {
        scanf("%lld", &L[zero_count][idx]);
        idx++;
        if (L[zero_count][idx - 1] == 0) {
            lens[zero_count] = idx - 1;
            zero_count++;
            idx = 0;
        }
    }
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < lens[i] - 1; j++) {
            for (int k = 0; k < lens[i] - j - 1; k++) {
                if (L[i][k] < L[i][k + 1]) {
                    int temp = L[i][k];
                    L[i][k] = L[i][k + 1];
                    L[i][k + 1] = temp;
                }
            }
        }
    }
    long long m[10];
    for (int i = 0; i < T; i++) {
        m[i] = 0;
        for (long long j = 0; j < lens[i]; j++) {
            m[i] += 2 * pow(L[i][j], j + 1);
        }
    }
    for (int i = 0; i < T; i++) {
        if (5 * pow(10, 6) < m[i]) printf("Too expensive\n");
        else printf("%lld\n", m[i]);
    }
}