#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long pay;
    int a1, a2;
    int dif;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> pay;
        a1 = pay / 3;
        a2 = a1;
        dif = (a1 + 2 * a2 - pay);
        if (dif % 2 == 0 && dif != 0) {
            if (dif > 0) {
                a2 += dif / 2;
            } else {
                a2 -= dif / 2;
            }
        } else if (dif != 0) {
            if (dif > 0)
                a1 += dif;
            else
                a1 -= dif;
        }
        cout << a1 << " " << a2 << endl;
    }

    return 0;
}