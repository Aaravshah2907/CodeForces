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

static const long long MOD = 1'000'000'007LL;
static const int MAXA = 500'000;

int spf[MAXA + 1];

void build_spf(){
    for (int i = 0; i <= MAXA; i++) spf[i] = i;

    for (int i = 2; i * i <= MAXA; i++){
        if (spf[i] == i){
            for (int j = i * i; j <= MAXA; j += i){
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}

void solve(){
    int n;
    ll x;
    cin >> n >> x;

    unordered_map<int, long long> cnt;

    for (int i = 0; i < n; i++){
        int a; cin >> a;

        while (a > 1){
            int p = spf[a];
            int e = 0;

            while (a % p == 0){
                a /= p;
                e++;
            }

            cnt[p] += e;
        }
    }

    long long ans = 1;

    for (auto &[p, s] : cnt){
        ans = ans * (s + 1) % MOD;
    }

    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    build_spf();
    int T = 1;

    if (!(cin >> T)) return 0;
    while (T--) solve();
    return 0;
}