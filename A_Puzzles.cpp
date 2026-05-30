// Question Number : 337A

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> f(m);
    for (int i = 0; i < m; i++) {
        cin >> f[i];
    }
    int diff = INT_MAX;
    sort(f.begin(), f.end());
    for (int i = 0; i <= m - n; i++) {
        diff = min(diff, f[i + n - 1] - f[i]);
    }
    cout << diff << "\n";
    return 0;
}
