#include <stdio.h>
int N, K, r;
int Kl[10];
void p(int n)
{
    if (N < n) return;
    r = r > n ? r : n;
    n *= 10;
    for (int i = 0; i < K; i++)
    {
        p(n + Kl[i]);
    }
}

int main()
{
    scanf("%d %d", &N, &K);
    for (int i = 0; i < K; i++)
    {
        scanf("%d", &Kl[i]);
    }
    p(0);
    printf("%d", r);
    return 0;
}
