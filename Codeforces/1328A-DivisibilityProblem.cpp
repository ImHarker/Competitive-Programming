#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long a, b, answer;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        answer = (b - a % b) % b;
        cout << answer << endl;
    }
    return 0;
}