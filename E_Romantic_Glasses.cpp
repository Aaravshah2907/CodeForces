// Question Number : 1915E

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        // Negate elements at even 0-based indices
        // (which corresponds to alternating signs)
        if (i % 2 == 0){
            a[i] = -a[i];
        }
    }

    // Set to store seen prefix sums.
    // We insert 0 initially to handle the case where a prefix sum itself hits 0.
    set<long long> seen_sums;
    seen_sums.insert(0);

    long long current_prefix_sum = 0;
    bool found = false;

    for (int i = 0; i < n; i++){
        current_prefix_sum += a[i];

        // If this prefix sum has been encountered before, a zero-sum subarray exists
        if (seen_sums.count(current_prefix_sum)){
            found = true;
        }
        seen_sums.insert(current_prefix_sum);
    }

    if (found){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n){
        while (n--){
                solve();
            }
        }
    return 0;
}
