#include <cstdio>
#include <set>
#include <cmath>
using namespace std;

int main() {
    int D1, D2;
    scanf("%d %d", &D1, &D2);
    set<double> angles;
    for (int i = D1; i <= D2; ++i) {
        for (int j = 1; j <= i; ++j) {
            double angle = 360.0 * j / i;
            angles.insert(angle);
        }
    }
    printf("%lu", angles.size());
}
