// Question Number : 363B

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++){
        cin >> h[i];
    }
    int idx = 0, current_sum = 0;
    int min_sum = INT_MAX, previous_sum = 0;
    for (int i = 0; i < k; i++){
        previous_sum += h[i];
    }
    for (int i = 0; i <= n - k; i++){
        if (previous_sum < min_sum){
            min_sum = previous_sum;
            idx = i;
        }
        if (previous_sum == k){
            break;
        }
        previous_sum -= h[i];
        if (i + k < n){
            previous_sum += h[i + k];
        }
    }
    cout << (idx + 1) << "\n";
    return 0;
}

