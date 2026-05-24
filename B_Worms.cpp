// Question Number : 474B

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), freq(n);
    for (auto &x : a)
        cin >> x;
    freq[0] = 0;
    for (int i = 1; i < n; i++)
        freq[i] = freq[i - 1] + a[i - 1];
    int m = 0;
    cin >> m;
    while (m--)
    {
        int q;
        cin >> q;
        int idx = upper_bound(freq.begin(), freq.end(), q - 1) - freq.begin();
        cout << idx << "\n";    
    }
}

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
