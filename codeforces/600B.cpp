#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

constexpr int INF = 1e9;
constexpr ll LINF = 1e18;
constexpr char nl = '\n';

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve(){
    int n, m;
    cin >> n >> m;

    vll a(n);
    for (auto &x : a) cin >> x;

    sort(a.begin(), a.end());

    while (m--) {
        ll query;
        cin >> query;
        ll ans = upper_bound(all(a), query) - a.begin();
        cout << ans << " ";
    }

    cout << nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;

    //if (!(cin >> T)) return 0;
    solve();
    return 0;
}