// Question Number : 1360D

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int i = 2;
    while (i * i <= n){
        if (n % i == 0){
            return false;
        }
        i++;
    }
    return true;
}

void solve(){
    int n, k;
    cin >> n >> k;

    // If we can buy all in one go
    if (k >= n){
        cout << 1 << "\n";
        return;
    }

    int ans = n; // Worst case: buy n packages of size 1

    // Find the largest divisor d of n such that d <= k
    // We only need to iterate up to sqrt(n)
    for (int i = 1; i * i <= n; i++){
        if (n % i == 0){
            // i is a divisor
            if (i <= k){
                ans = min(ans, n / i);
            }
            // n/i is also a divisor
            if (n / i <= k){
                ans = min(ans, i);
            }
        }
    }
    cout << ans << "\n";
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
