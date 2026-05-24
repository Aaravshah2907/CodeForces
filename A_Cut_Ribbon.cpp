// Question Number : 189A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, c;
    if (!(cin >> n >> a >> b >> c))
        return 0;

    // dp[i] will store the maximum number of pieces for a ribbon of length i
    vector<int> dp(n + 1, -1);

    // Base case: 0 length ribbon yields 0 pieces
    dp[0] = 0;

    for (int i = 1; i <= n; ++i){
        if (i >= a && dp[i - a] != -1){
            dp[i] = max(dp[i], dp[i - a] + 1);
        }
        if (i >= b && dp[i - b] != -1){
            dp[i] = max(dp[i], dp[i - b] + 1);
        }
        if (i >= c && dp[i - c] != -1){
            dp[i] = max(dp[i], dp[i - c] + 1);
        }
    }

    cout << dp[n] << "\n";
    return 0;
}