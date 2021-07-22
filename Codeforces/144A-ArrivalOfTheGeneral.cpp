#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int min;
    int max;
    int maxf = true;
    int minpos;
    int maxpos;
    int s = 0;
    int v[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    min = *min_element(v, v + n);
    max = *max_element(v, v + n);

    for (int i = 0; i < n; i++) {
        if (v[i] == max && maxf) {
            maxpos = i;
            maxf = false;
        } else if (v[i] == min)
            minpos = i;
    }
    s += maxpos;
    s += n - minpos - 1;
    if (maxpos > minpos) s--;
    //cout << min << " " << max << " " << minpos << " " << maxpos;
    cout << s;
    return 0;
}