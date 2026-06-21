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
    int n,x; cin >> n >> x;
    vll a(n);
    for (auto &x : a) cin >> x;
    int odds = 0, evens = 0;
    for (auto x : a){
        if (x%2 == 1) odds++;
        else evens++;
    }
    bool flag = 0;
    for (int i = 1; i <= odds && i <= x; i += 2) // Fix no of odd
    {
        int have = evens, need = x - i;
        if (need <= evens)
            flag = 1;
    }
    if (flag) cout << "Yes";
    else cout << "No";
    cout << nl;
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;

    if (!(cin >> T)) return 0;
    while (T--) solve();
    return 0;
}