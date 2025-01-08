#include <stdio.h>
#define MOD 1000000007

int main() {
    long long H, x;
    scanf("%lld %lld", &H, &x);
    long long s = 0;
    long long c = 1;
    for (long long i = 0; i < H; i++) {
        c *= x;
        c %= MOD;
        long long r;
        scanf("%lld", &r);
        s += r * c;
        s %= MOD;
    }
    printf("%lld", s % MOD);
}