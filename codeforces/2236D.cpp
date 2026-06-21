#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
constexpr char nl = '\n';

struct Fenwick {
    int n;
    vector<int> f;
    Fenwick(int n): n(n), f(n+1, 0) {}
    void update(int i, int delta) {
        ++i;
        while (i <= n) {
            f[i] += delta;
            i += i & -i;
        }
    }
    int query(int i) const {
        int res = 0;
        ++i;
        while (i > 0) {
            res += f[i];
            i -= i & -i;
        }
        return res;
    }
    int rangeQuery(int l, int r) const {
        if (l > r) return 0;
        return query(r) - (l ? query(l - 1) : 0);
    }
};

void solve() {
    int n, k;
    cin >> n >> k;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    vi vals;
    vi counts;
    for (int x : a) {
        if (vals.empty() || vals.back() != x) {
            vals.push_back(x);
            counts.push_back(1);
        } else {
            counts.back()++;
        }
    }

    for (int c : counts) {
        if ((c & 1) == 0) {
            cout << "YES" << nl;
            return;
        }
    }

    int m = (int)vals.size();
    vi r(m);
    int rr = 0;
    for (int i = 0; i < m; i++) {
        rr = max(rr, i);
        while (rr + 1 < m && vals[rr + 1] - vals[i] <= k) {
            rr++;
        }
        r[i] = rr;
    }

    vector<char> dp(m, false);
    Fenwick fenw(m);
    for (int i = m - 1; i >= 0; i--) {
        dp[i] = fenw.rangeQuery(i + 1, r[i]) > 0;
        if (!dp[i]) {
            fenw.update(i, 1);
        }
    }

    bool answer = false;
    for (int i = 0; i < m; i++) {
        if (dp[i]) {
            answer = true;
            break;
        }
    }
    cout << (answer ? "YES" : "NO") << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) solve();
    return 0;
}
