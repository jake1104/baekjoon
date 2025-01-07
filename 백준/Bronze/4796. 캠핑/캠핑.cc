#include <stdio.h>

int main() {
    int L[1000], P[1000], V[1000];
    int i = 0;
    while (true) {
        scanf("%d %d %d", &L[i], &P[i], &V[i]);
        if (L[i] == 0 && P[i] == 0 && V[i] == 0) {
            break;
        }
        printf("Case %d: %d\n", i + 1, (V[i] / P[i]) * L[i] + (V[i] % P[i] > L[i] ? L[i] : V[i] % P[i]));
        i++;
    }
}