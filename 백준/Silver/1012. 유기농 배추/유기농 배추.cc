#include <stdio.h>

int m[10];
int map[50][50];
bool v[50][50];
bool vis[50][50];
int T;
int M[10], N[10], K[10];
int nT;
int dx[4] = { 0, -1, 0, 1 };
int dy[4] = { 1, 0, -1, 0 };

void dfs(int ni, int nj) {
    if (vis[ni][nj] || map[ni][nj] == 0) return;
    else {
        vis[ni][nj] = true;
        if (!v[ni][nj]) {
            m[nT]++;
            v[ni][nj] = true;
        }
        for (int i = 0; i < 4; i++) {
            if (0 <= ni + dy[i] && ni + dy[i] < M[nT] && 0 <= nj + dx[i] && nj + dx[i] < N[nT]) {
                v[ni + dy[i]][nj + dx[i]] = true;
                dfs(ni + dy[i], nj + dx[i]);
            }
        }
    }
}

int main() {
    scanf("%d", &T);
    int Kl[10][2500][2];
    for (int i = 0; i < T; i++) {
        nT = i;
        m[i] = 0;
        scanf("%d %d %d", &M[i], &N[i], &K[i]);
        for (int j = 0; j < M[i]; j++) {
            for (int k = 0; k < N[i]; k++) {
                map[j][k] = 0;
                v[j][k] = false;
                vis[j][k] = false;
            }
        }
        for (int j = 0; j < K[i]; j++) {
            scanf("%d %d", &Kl[i][j][0], &Kl[i][j][1]);
            map[Kl[i][j][0]][Kl[i][j][1]] = 1;
        }
        for (int j = 0; j < M[i]; j++) {
            for (int k = 0; k < N[i]; k++) {
                dfs(j, k);
            }
        }
        printf("%d\n", m[i]);
    }
}