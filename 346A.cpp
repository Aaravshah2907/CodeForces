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

ll gcd(const vll &a){
    ll res = 0;
    for (ll x : a){
        if (res == 1) return res;
        res = std::gcd(res, x);
    }
    return res;
}

void solve(){
    int n;
    cin >> n;
    vll a(n);
    for (ll &x : a) cin >> x;
    ll maxNum = 0;
    for (ll num : a){
        maxNum = max(maxNum, num);
    }
    ll d = gcd(a);
    ll rounds = maxNum / d - n;
    if (rounds % 2 == 1) cout << "Alice" << nl;
    else cout << "Bob" << nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;

    while (T--)
        solve();

    return 0;
}