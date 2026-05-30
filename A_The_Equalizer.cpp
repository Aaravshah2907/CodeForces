// Question Number : 2217A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, sum = 0;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 == 1){
        cout << "YES\n";
    } else if (n*k % 2 == 0){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return;
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
