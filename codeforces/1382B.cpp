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
    int n; cin >> n;
    vll a(n);
    bool winner;
    for (auto &x : a) cin >> x;
    int ones_beg = 0;
    for(int i = 0; i < n ; i++){
        if(a[i] == 1) ones_beg++;
        else break;
    }
    if (ones_beg == n){
        if (n%2 == 0) winner = 0;
        else winner = 1;
    }
    else if (ones_beg % 2 == 1)
        winner = 0;
    else winner =1;
    if (!winner) cout << "Second" << nl;
    else cout << "First" << nl;
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