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

bool is_even(int n){
    return (n%2==0);
}

void solve(){
    string s;
    cin >> s;

    int n = s.size();
    int best_index = -1;
    int fallback_index = -1;
    int last_digit = s.back() - '0';

    for (int i = 0; i < n - 1; i++) {
        int digit = s[i] - '0';
        if (digit % 2 != 0) continue;

        if (digit < last_digit) {
            if (best_index == -1) {
                best_index = i;
            }
        }
        fallback_index = i;
    }

    if (best_index == -1) {
        best_index = fallback_index;
    }

    if (best_index == -1) {
        cout << -1 << nl;
        return;
    }

    swap(s[best_index], s.back());
    cout << s << nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;

    //if (!(cin >> T)) return 0;
    while (T--) solve();
    return 0;
}