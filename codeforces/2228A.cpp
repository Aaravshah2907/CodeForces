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
    int counter = 0, mod_val = 0;
    vi freq{0,0,0};
    vi w(n);
    for (int x : w){
        int i; cin >> i;
        x = i % 3;
        freq[x]++;
    }
    counter = freq[0] + min(freq[1], freq[2]);
    int rem = min(freq[1], freq[2]);
    freq[1] -= rem;
    freq[2] -= rem; //cout << freq[2] << " ";
    counter += (freq[1]/3 + freq[2]/3);
    cout << counter << nl;
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