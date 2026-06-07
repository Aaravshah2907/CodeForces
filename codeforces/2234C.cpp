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

struct DSU{
    vi p, sz;

    DSU(int n) : p(n), sz(n, 1){
        iota(p.begin(), p.end(), 0);
    }

    int find(int v){
        return p[v] == v ? v : p[v] = find(p[v]);
    }

    void unite(int a, int b){
        a = find(a);
        b = find(b);

        if (a == b) return;

        if (sz[a] < sz[b]) swap(a, b);

        p[b] = a;
        sz[a] += sz[b];
    }

    int size(int v){
        return sz[find(v)];
    }
};

void solve(){
    int n; cin >> n;

    vll h(n);
    for (auto &x : h) cin >> x;

    vector<array<ll, 3>> edges;
    for (int i = 0; i < n; i++){
        edges.push_back({h[i], i, (i + 1) % n});
    }

    sort(edges.begin(), edges.end());

    DSU dsu(n);
    vector<ll> F(n, 0);

    ll prev = 0;
    int ptr = 0;

    while (ptr < n){
        ll w = edges[ptr][0];
        ll delta = w - prev;

        for (int v = 0; v < n; v++){
            F[v] += delta * dsu.size(v);
        }

        while (ptr < n && edges[ptr][0] == w){
            dsu.unite((int)edges[ptr][1], (int)edges[ptr][2]);
            ptr++;
        }

        prev = w;
    }

    ll mx = prev;

    for (int i = 0; i < n; i++){
        ll ans = 1LL * n * mx - F[i];
        cout << ans << (i + 1 == n ? '\n' : ' ');
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