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
    int n,k;
    cin >> n >> k;

    string s,z;
    cin >> s >> z;
    ll a = 0, b = 0, c =0, d = 0;

    for (int i = 0; i < (int)n; i++){
        if (s[i] == '0' && z[i] == '0') a++;
        else if (s[i] == '0' && z[i] == '1') b++;
        else if (s[i] == '1' && z[i] == '0') c++;
        else d++;
    }

    ll N = (1LL << k) + 1;
    ll ans = 0;

    if (k & 1){
        ll m = N / 3;
        ll pairs = a * (b + c + d) + b * c + b * d + c * d;
        ans = 2 * m * pairs;
    }
    else {
        ll m = (N + 1) / 3;

        ans += a * b * (2 * m - 1);
        ans += a * c * (2 * m - 1);
        ans += a * d * (2 * m);

        ans += b * c * (2 * m);
        ans += b * d * (2 * m - 1);
        
        ans += c * d * (2 * m - 1);
    }

    cout << ans << '\n';
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