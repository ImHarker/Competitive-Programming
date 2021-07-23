#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    set<char> c;
    getline(cin, s, '}');

    for (int i = 0; i < s.length(); i++) {
        if ((char)s[i] != '{' && (char)s[i] != '}' && (char)s[i] != ',' && (char)s[i] != ' ')
            c.emplace(s[i]);
    }
    cout << c.size();
    return 0;
}