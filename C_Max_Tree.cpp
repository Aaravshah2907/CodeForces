#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> adj(n + 1);
    vector<int> in_degree(n + 1, 0);

    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        long long x, y;
        cin >> u >> v >> x >> y;

        if (x > y)
        {
            adj[u].push_back(v);
            in_degree[v]++;
        }
        else
        {
            adj[v].push_back(u);
            in_degree[u]++;
        }
    }

    queue<int> q;
    for (int i = 1; i <= n; ++i)
    {
        if (in_degree[i] == 0)
        {
            q.push(i);
        }
    }

    vector<int> topo_order;
    topo_order.reserve(n); 
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        topo_order.push_back(u);

        for (int v : adj[u])
        {
            in_degree[v]--;
            if (in_degree[v] == 0)
            {
                q.push(v);
            }
        }
    }

    vector<int> p(n + 1);
    int current_value = n;
    for (int vertex : topo_order)
    {
        p[vertex] = current_value;
        current_value--;
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << p[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--){solve();}
    return 0;
}