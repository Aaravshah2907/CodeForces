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
    vector<int> boss(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> boss[i];
    }

    vector<int> depth(n + 1, 0);
    
    function<int(int)> dfs = [&](int u){
        if(depth[u] != 0) return depth[u];
        if(boss[u] == -1) return depth[u] = 1;
        return depth[u] = 1 + dfs(boss[u]);
    };

    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans = max(ans, dfs(i));
    }
    cout << ans << nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;

    //if (!(cin >> T)) return 0;
    while (T--) solve();
    return 0;
}