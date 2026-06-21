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

struct Subsegment{
    int L, R;    // Positional indices in the array a
    int min_val; // Minimum value in this subsegment
};

// Global frequency array to track duplicates in O(1)
int freq[6005];
int current_marker = 0;

void solve(){
    int n; cin >> n;
    vi a(n);
    for(auto &x : a) cin >> x;

    vector<vector<Subsegment>> valid_segments(n + 1);

    for (int i = 0; i < n; ++i){
        current_marker++;
        int min_val = a[i];
        int max_val = a[i];

        for (int j = i; j < n; ++j){
            if (freq[a[j]] == current_marker) break;
            freq[a[j]] = current_marker;

            if (a[j] < min_val) min_val = a[j];
            if (a[j] > max_val) max_val = a[j];

            int len = j - i + 1;
            
            if (max_val - min_val + 1 == len) valid_segments[len].push_back({i, j, min_val});
        }
    }

    int max_k = 0;

    for (int k = n / 2; k >= 1; --k){
        if (k <= max_k) break;
        if (valid_segments[k].empty()) continue;

        int sz = valid_segments[k].size();

        for (int i = 0; i < sz; ++i){
            for (int j = i + 1; j < sz; ++j){
                const auto &seg1 = valid_segments[k][i];
                const auto &seg2 = valid_segments[k][j];

                if (seg1.R >= seg2.L && seg2.R >= seg1.L) continue;

                if (seg1.min_val + k == seg2.min_val || seg2.min_val + k == seg1.min_val){
                    max_k = k;
                    break;
                }
            }
            if (max_k == k) break;
        }
    }

    cout << max_k << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;

    if (!(cin >> T)) return 0;
    while (T--) solve();
    return 0;
}