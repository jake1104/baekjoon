#include<bits/stdc++.h>
using namespace std;
bool c[2001][2001];
int main() {
    int a, b, ans = 1;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        for (int j = 1; j < i; j++) {
            int g = gcd(i, j);
            if (!c[j / g][i / g]) {
                ans++;
                c[j / g][i / g] = 1;
            }
        }
    }
    cout << ans;
}
