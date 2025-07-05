#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
const ld PI = acosl(-1.0L);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    vector<ld> x(N + 2, 0.0L), y(N + 2, 0.0L);
    for (int i = 1; i <= N; ++i) {
        long long xi, yi;
        cin >> xi >> yi;
        x[i] = static_cast<ld>(xi);
        y[i] = static_cast<ld>(yi);
    }

    vector<ld> S_A(N + 2, 0.0L), S_Cx(N + 2, 0.0L), S_Cy(N + 2, 0.0L);
    for (int m = 1; m <= N; ++m) {
        int next_m = (m == N) ? 1 : m + 1;
        ld term_A = x[m] * y[next_m] - x[next_m] * y[m];
        S_A[m] = S_A[m - 1] + term_A;
        S_Cx[m] = S_Cx[m - 1] + (x[m] + x[next_m]) * term_A;
        S_Cy[m] = S_Cy[m - 1] + (y[m] + y[next_m]) * term_A;
    }

    int Q;
    cin >> Q;
    while (Q--) {
        int i, j;
        cin >> i >> j;
        if (i == j) {
            cout << "0\n";
            continue;
        }

        bool consecutive = false;
        if ((i + 1 == j) || (i == N && j == 1)) {
            consecutive = true;
        } else if ((j + 1 == i) || (j == N && i == 1)) {
            consecutive = true;
        }
        if (consecutive) {
            cout << "0\n";
            continue;
        }

        // Compute area for part A (i to j)
        int end_A = j - 1;
        ld sum_edges_A;
        if (i <= end_A) {
            sum_edges_A = S_A[end_A] - S_A[i - 1];
        } else {
            sum_edges_A = S_A[N] - S_A[i - 1] + S_A[end_A];
        }
        ld closing_A = x[j] * y[i] - x[i] * y[j];
        ld sum_total_A = sum_edges_A + closing_A;
        ld area_A = sum_total_A / 2.0L;
        if (fabsl(area_A) < 1e-10) {
            cout << "0\n";
            continue;
        }

        ld sum_edges_Cx_A;
        if (i <= end_A) {
            sum_edges_Cx_A = S_Cx[end_A] - S_Cx[i - 1];
        } else {
            sum_edges_Cx_A = S_Cx[N] - S_Cx[i - 1] + S_Cx[end_A];
        }
        ld sum_total_Cx_A = sum_edges_Cx_A + (x[i] + x[j]) * closing_A;
        ld cx_A = sum_total_Cx_A / (6.0L * area_A);

        ld sum_edges_Cy_A;
        if (i <= end_A) {
            sum_edges_Cy_A = S_Cy[end_A] - S_Cy[i - 1];
        } else {
            sum_edges_Cy_A = S_Cy[N] - S_Cy[i - 1] + S_Cy[end_A];
        }
        ld sum_total_Cy_A = sum_edges_Cy_A + (y[i] + y[j]) * closing_A;
        ld cy_A = sum_total_Cy_A / (6.0L * area_A);

        // Compute area for part B (j to i)
        int start_B = j;
        int end_B = (i == 1) ? N : i - 1;
        ld sum_edges_B;
        if (start_B <= end_B) {
            sum_edges_B = S_A[end_B] - S_A[start_B - 1];
        } else {
            sum_edges_B = S_A[N] - S_A[start_B - 1] + S_A[end_B];
        }
        ld closing_B = x[i] * y[j] - x[j] * y[i];
        ld sum_total_B = sum_edges_B + closing_B;
        ld area_B = sum_total_B / 2.0L;
        if (fabsl(area_B) < 1e-10) {
            cout << "0\n";
            continue;
        }

        ld sum_edges_Cx_B;
        if (start_B <= end_B) {
            sum_edges_Cx_B = S_Cx[end_B] - S_Cx[start_B - 1];
        } else {
            sum_edges_Cx_B = S_Cx[N] - S_Cx[start_B - 1] + S_Cx[end_B];
        }
        ld sum_total_Cx_B = sum_edges_Cx_B + (x[j] + x[i]) * closing_B;
        ld cx_B = sum_total_Cx_B / (6.0L * area_B);

        ld sum_edges_Cy_B;
        if (start_B <= end_B) {
            sum_edges_Cy_B = S_Cy[end_B] - S_Cy[start_B - 1];
        } else {
            sum_edges_Cy_B = S_Cy[N] - S_Cy[start_B - 1] + S_Cy[end_B];
        }
        ld sum_total_Cy_B = sum_edges_Cy_B + (y[j] + y[i]) * closing_B;
        ld cy_B = sum_total_Cy_B / (6.0L * area_B);

        // Calculate distance from centroids to the line
        ld xi = x[i], xj = x[j], yi = y[i], yj = y[j];
        ld dx = xj - xi, dy = yj - yi;
        ld len_line_sq = dx * dx + dy * dy;
        if (len_line_sq < 1e-20) {
            cout << "0\n";
            continue;
        }

        // Distance for A
        ld cross_A = (cx_A - xi) * dy - (cy_A - yi) * dx;
        ld dist_A = fabsl(cross_A) / sqrtl(len_line_sq);

        // Distance for B
        ld cross_B = (cx_B - xi) * dy - (cy_B - yi) * dx;
        ld dist_B = fabsl(cross_B) / sqrtl(len_line_sq);

        ld vol_A = fabsl(area_A) * dist_A * 2 * PI;
        ld vol_B = fabsl(area_B) * dist_B * 2 * PI;
        ld ans = min(vol_A, vol_B);
        cout.precision(10);
        cout << fixed << ans << '\n';
    }
    return 0;
}