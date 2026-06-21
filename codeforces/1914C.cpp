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

template <class T>
bool ckmin(T &a, const T &b){
    return b < a ? a = b, true : false;
}

template <class T>
bool ckmax(T &a, const T &b){
    return a < b ? a = b, true : false;
}

void solve(){
    int n, k; cin >> n >> k;
    vll a(n);
    for (auto &x : a) cin >> x;
    vll b(n);
    for (auto &x : b) cin >> x;
    ll res = 0, mx = 0, sum = 0;
    for(int i = 0; i < min(n,k);i++){
        sum += a[i];
        mx = max(mx, b[i]);
        res = max(res, sum + mx * (k - i - 1));
    }
    cout << res << nl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;

    if (!(cin >> T)) return 0;
    while (T--) solve();
    return 0;
}