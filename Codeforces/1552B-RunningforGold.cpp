//Failed by time
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int n;
    int v[50000][5];
    cin >> t;
    for (int i = 0; i < t; i++) {
        int answer = -1;
        bool flag = false;
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> v[j][0] >> v[j][1] >> v[j][2] >> v[j][3] >> v[j][4];
        }

        for (int j = 0; j < n; j++) {
            if (flag) break;
            int sub = 0;
            for (int k = 0; k < n; k++) {
                if (j == k) {
                    sub++;
                    continue;
                }
                int best = 0;
                if (v[j][0] <= v[k][0]) {
                    best++;
                }
                if (v[j][1] <= v[k][1]) {
                    best++;
                }
                if (v[j][2] <= v[k][2]) {
                    best++;
                }
                if (v[j][3] <= v[k][3]) {
                    best++;
                }
                if (v[j][4] <= v[k][4]) {
                    best++;
                }
                if (best >= 3) {
                    sub++;
                    if (sub == n) {
                        answer = j + 1;
                        flag = true;
                        break;
                    }
                } else
                    break;
            }
        }
        if (n == 1) answer = 1;
        cout << answer << endl;
    }
    return 0;
}