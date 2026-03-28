#include <iostream>
#include <algorithm> 

using namespace std;

void solve() {
    long long x, y;
    cin >> x >> y;

    if (x < y) {
        cout << 2 << endl;
        return;
    }

    if (y >= 2 && x >= y + 2) {
        cout << 3 << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
