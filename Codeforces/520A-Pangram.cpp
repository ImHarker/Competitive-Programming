#include <bits/stdc++.h>

#include <algorithm>

using namespace std;

int main() {
    int n;
    set<char> set;
    string s;
    cin >> n;
     cin >> s;

    if (n < 26) {
        cout << "NO";
        return 0;
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i = 0; i < n; i++) {
            set.emplace(s[i]);
        }
        if (set.size() == 26)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}