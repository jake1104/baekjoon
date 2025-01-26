#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int C[250000];
    int cnt = 0;
    bool isp[250000];
    for (int i = 0; i < N; i++) {
        scanf("%d", &C[i]);
        cnt += C[i];
        isp[i] = true;
        if (C[i] > 0) isp[i] = false;
    }
    for (int i = 0; i < N; i++) {
        if (isp[i]) {
            cnt++;
            isp[(i + N - 1) % N] = false;
            isp[(i + 1) % N] = false;
        }
    }
    printf("%d", cnt);
}