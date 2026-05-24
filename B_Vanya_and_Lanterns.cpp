// Question Number : 492B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,l;
    cin >> n >> l;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    double ans = max(a[0] - 0, l - a[n - 1]);
    for (int i = 0; i + 1 < n; i++){
        ans = max(ans, (a[i + 1] - a[i]) / 2.0);
    }
    cout << fixed << setprecision(10) << ans << "\n";
}

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
