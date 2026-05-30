// Question Number : 2229A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int avg = round((a[0]+a[n-1])/2.0);
    int ans = 0;
    ans = max(ans, abs(avg - a[0]));
    ans = max(ans, abs(avg - a[n-1]));
    cout << ans << "\n";

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
