#include <stdio.h>
int N, M;
bool p(int arr[], int n) {
    bool c = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) c = false;
        }
    }
    return c;
}
void f(int arr[], int n) {
    if (!p(arr, n)) return;
    if (n == M) {
        for (int i = 0; i < M; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 1; i <= N; i++) {
        int fa[8];
        for (int j = 0; j < n; j++) {
            fa[j] = arr[j];
        }
        fa[n] = i;
        f(fa, n + 1);
    }
}
int main() {
    scanf("%d %d", &N, &M);
    int temp[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
    f(temp, 0);
}