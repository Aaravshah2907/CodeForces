// Question Number : 1903A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin >> n >> k;
    vector<unsigned long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (k > 1) {
        cout << "YES" << endl;
        return;
    }
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i-1]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t){
        while (t--){
                solve();
            }
        }
    return 0;
}
