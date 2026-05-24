#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve(){
    int n;
    if (!(cin >> n))
        return;
    vector<long long> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    // Stores active candidate targets and their running total of operations
    vector<pair<long long, long long>> cands;
    map<long long, int> seen;
    long long curr = a[0];
    int d = 0;

    // Generate the path for the first element
    while (seen.find(curr) == seen.end()){
        seen[curr] = d;
        cands.push_back({curr, d});
        if (curr % 2 == 0){
            curr /= 2;
        } else {
            curr += 1;
        }
        d++;
    }

    // Process all subsequent elements
    for (int i = 1; i < n; i++){
        map<long long, int> cur_dist;
        curr = a[i];
        d = 0;

        // Generate the path for the current element
        while (cur_dist.find(curr) == cur_dist.end()){
            cur_dist[curr] = d;
            if (curr % 2 == 0){
                curr /= 2;
            } else {
                curr += 1;
            }
            d++;
        }

        vector<pair<long long, long long>> next_cands;

        // Intersect and accumulate distances for common reachable targets
        for (auto &cand : cands){
            if (cur_dist.find(cand.first) != cur_dist.end()){
                next_cands.push_back({cand.first, cand.second + cur_dist[cand.first]});
            }
        }
        cands = next_cands; // Filter down the valid candidate targets
    }

    // Find the minimum operations needed among the common intersection
    long long ans = -1;
    for (auto &cand : cands){
        if (ans == -1 || cand.second < ans){
            ans = cand.second;
        }
    }
    cout << ans << "\n";
}

int main()
{
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t){
        while (t--){
            solve();
        }
    }
    return 0;
}