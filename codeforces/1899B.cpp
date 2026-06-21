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

vll printDivisors(ll n) {
    vll divisors;
    // Note that this loop runs till square root
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
        // If divisors are equal, print only one
            if (n / i == i) {
                divisors.push_back(i) ;
            }
            // Otherwise print both
            else {
                divisors.push_back(i) ;
                divisors.push_back(n/i) ;
            }
        }
    }
    return divisors;
}

void solve(){
    int n; cin >> n;
    vll a(n);
    for (auto &x : a) cin >> x;
    vll factors = printDivisors(n);
    vll diffs_possible;
    for (ll k : factors){
        vll sums;
        for (int i = 0; i < n; i += k){
            ll sum = 0;
            for (int j = i; j < i + k; j++){
                sum += a[j];
            }
            sums.push_back(sum);
        }
        ll mx = *std::max_element(all(sums));
        ll mn = *std::min_element(all(sums));
        diffs_possible.push_back(mx - mn);
    }
    cout << *std::max_element(all(diffs_possible)) << nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;

    if (!(cin >> T)) return 0;
    while (T--) solve();
    return 0;
}