#include <bits/stdc++.h>

using namespace std;

int main() {
    int home[30];
    int guest[30];
    int n;
    int answer = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> home[i] >> guest[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (home[i] == guest[j]) answer++;
        }
    }
    cout << answer;
    return 0;
}