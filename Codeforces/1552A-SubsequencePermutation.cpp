#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int nn;
    string s;
    string ss;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int count = 0;
        cin >> nn;
        cin >> s;
        ss = s;
        sort(ss.begin(), ss.end());
        for (int j = 0; j < nn; j++) {
            if (s[j] != ss[j]) {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}