// Question Number : 228A

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> a(4);
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        if (a[i] == a[i+1]) {
            ans++;
        }    }
    cout << ans << "\n";
    return 0;
}
