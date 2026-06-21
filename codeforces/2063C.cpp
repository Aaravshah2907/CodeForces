#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;

constexpr char nl = '\n';

void solve(){
    int n;
    cin >> n;
    vector<vi> adj(n);
    vi deg(n, 0);
    for (int i = 0; i < n - 1; i++){
        int u, v;
        cin >> u >> v;
        --u; --v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }

    if (n == 2){
        cout << 0 << nl;
        return;
    }

    int best_adj = 0;
    for (int u = 0; u < n; u++){
        for (int v : adj[u]){
            if (u < v){
                best_adj = max(best_adj, deg[u] + deg[v] - 2);
            }
        }
    }

    vector<pair<int,int>> order;
    order.reserve(n);
    for (int i = 0; i < n; i++){
        order.emplace_back(deg[i], i);
    }
    sort(order.rbegin(), order.rend());

    int best_nonadj = 0;
    int K = min(n, 500);
    vector<char> blocked(n);
    for (int idx = 0; idx < K; idx++){
        int u = order[idx].second;
        blocked[u] = 1;
        for (int v : adj[u]){
            blocked[v] = 1;
        }

        for (int j = 0; j < n; j++){
            int v = order[j].second;
            if (!blocked[v]){
                best_nonadj = max(best_nonadj, deg[u] + deg[v] - 1);
                break;
            }
        }

        blocked[u] = 0;
        for (int v : adj[u]){
            blocked[v] = 0;
        }
    }

    int answer = max(best_adj, best_nonadj);
    cout << answer << nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--){
        solve();
    }
    return 0;
}
