#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s.length() % 2 != 0)
            cout << "NO\n";
        else {
            std::string half = s.substr(0, s.length() / 2);
            std::string otherHalf = s.substr(s.length() / 2);
            if (half == otherHalf)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
