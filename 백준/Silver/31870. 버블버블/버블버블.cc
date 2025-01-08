#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int n;
vector<int> uparr, doarr;
int upcount = 0;
int downcount = 1;

void ascend();
void descend();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    uparr.resize(n);
    doarr.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> uparr[i];
        doarr[i] = uparr[i];
    }
    ascend();
    descend();
    cout << min(upcount, downcount) << endl;
    return 0;
}

void ascend() {
    bool run = true;
    while (run) {
        bool check = false;
        for (int i = 0; i < n - 1; i++) {
            if (uparr[i] > uparr[i + 1]) {
                check = true;
                swap(uparr[i], uparr[i + 1]);
                upcount++;
            }
        }
        if (!check) run = false;
    }
}

void descend() {
    bool run = true;
    while (run) {
        bool check = false;
        for (int i = 0; i < n - 1; i++) {
            if (doarr[i] < doarr[i + 1]) {
                check = true;
                swap(doarr[i], doarr[i + 1]);
                downcount++;
            }
        }
        if (!check) run = false;
    }
}
