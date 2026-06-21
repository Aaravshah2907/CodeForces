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
    ll a,b,x;
    cin >> a >> b >> x;
    vector<ll> va, vb;
    ll cur = a;
    while (true){
        va.push_back(cur);
        if (cur==0) break;
        cur /= x;
    }
    cur = b;
    while (true){
        vb.push_back(cur);
        if (cur==0) break;
        cur /= x;
    }
    ll ans = LLONG_MAX;
    for (int i = 0; i < (int)va.size(); ++i){
        for (int j = 0; j < (int)vb.size(); ++j){
            ll cost = i + j + llabs(va[i] - vb[j]);
            if (cost < ans) ans = cost;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;

    if (!(cin >> T)) return 0;
    while (T--) solve();
    return 0;
}