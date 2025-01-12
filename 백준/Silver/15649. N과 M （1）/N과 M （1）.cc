#include <stdio.h>
int N, M;
int arr[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
bool in[8];
void f(int n) {
    if (n == M) {
        for (int i = 0; i < M; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 1; i <= N; i++) {
        if (!in[i])
        {
            in[i] = true;
            arr[n] = i;
            f(n + 1);
            in[i] = false;
        }
    }
}
int main() {
    scanf("%d %d", &N, &M);
    f(0);
}