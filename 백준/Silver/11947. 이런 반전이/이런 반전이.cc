#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);
    long long t[1000];
    for (int i = 0; i < T; i++) {
        scanf("%lld", &t[i]);
        long long d = (long long)pow(10, (int)log10(t[i]) + 1);
        printf("%lld\n", d / 2 - 1 < t[i] ? d / 2 * (d / 2 - 1) : (d - 1 - t[i]) * t[i]);
    }
}