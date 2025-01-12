#include <stdio.h>
int N, M;
int arr[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
int n = 0;
bool p(int n) {
    bool c = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) c = false;
        }
    }
    return c;
}
void f(int n) {
    if (!p(n)) return;
    if (n == M) {
        for (int i = 0; i < M; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 1; i <= N; i++) {
        arr[n] = i;
        f(n + 1);
    }
}
int main() {
    scanf("%d %d", &N, &M);
    f(0);
}