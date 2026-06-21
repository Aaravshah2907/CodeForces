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
    vi a(n);
    for (auto &x : a) cin >> x;

    unordered_map<int, int> freq;
    freq.reserve(n * 2);
    for (int x : a) {
        freq[x]++;
    }

    int bestL = -1, bestR = -1;
    int curL = 0;
    while (curL < n){
        if (freq[a[curL]] != 1) {
            curL++;
            continue;
        }
        int curR = curL;
        while (curR < n && freq[a[curR]] == 1) {
            curR++;
        }
        if (curR - curL > bestR - bestL) {
            bestL = curL;
            bestR = curR;
        }
        curL = curR;
    }

    if (bestL == -1) {
        cout << 0 << nl;
    } else {
        cout << bestL + 1 << " " << bestR << nl;
    }
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