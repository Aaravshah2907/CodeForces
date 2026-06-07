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
bool ckmax(T &a, const T &b)
{
    return a < b ? a = b, true : false;
}

void solve(){
    int n; cin >> n;
    vll b(n);
    for (ll &x : b) cin >> x;
    if (n == 2) {
        cout << max(b[0], b[1]) << " " << min(b[0], b[1]) << nl;
        return;
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < n - 2 ; i++){
        if(b[i] != b[i+2] % b[i+1]){
            cout << "-1" << nl;
            return;
        }
    }
    cout << b[n-1] << " " << b[n-2] << nl;
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;

    while (T--)
        solve();

    return 0;
}