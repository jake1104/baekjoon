#include <stdio.h>
#include <math.h>
int m = 1;
bool ip(int n) {
    if (n == 0) return true;
    if (n == 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void f(int n) {
    if (!ip(n)) return;
    if (n % (m / 10) != n) {
        printf("%d\n", n);
        return;
    }
    for (int i = 1; i <= 9; i++) {
        f(n * 10 + i);
    }
}
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        m *= 10;
    }
    f(0);
}