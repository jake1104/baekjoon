#include <stdio.h>
int N;
int map[3][3];
bool c;
void dfs(int m, int n) {
    if (map[m][n] == -1 || c) {
        c = true;
        return;
    }
    if (map[m][n] == 0) return;
    int x, y;
    x = n + map[m][n];
    y = m;
    if (0 <= y && y < N && 0 <= x && x < N) {
        dfs(y, x);
    }
    x = n;
    y = m + map[m][n];
    if (0 <= y && y < N && 0 <= x && x < N) {
        dfs(y, x);
    }
}
int main() {
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &map[i][j]);
        }
    }
    c = false;
    dfs(0, 0);
    if (c) printf("HaruHaru");
    else printf("Hing");
}