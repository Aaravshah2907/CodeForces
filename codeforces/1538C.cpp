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

ll countPairsWithSumLessEqual(int n, vll &a, ll k){
    ll count = 0;
    int low = 0, high = n - 1;
    while (low < high){
        if (a[low] + a[high] <= k){
            count += (high - low);
            low++;
        }
        else high--;
    }
    return count;
}

void solve(){
    ll n, l, r;
    cin >> n >> l >> r;

    vll a(n);
    for (auto &x : a) cin >> x;

    sort(all(a));
    ll count = countPairsWithSumLessEqual(n,a,r) - countPairsWithSumLessEqual(n,a,l-1);
    cout << count << nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;

    if (!(cin >> T)) return 0;
    while (T--) solve();
    return 0;
}