// Question Number : 705A

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string hate = "I hate ";
    string love = "I love ";
    string that = "that ";
    string ans = "";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            ans += hate;
        } else {
            ans += love;
        }
        if (i != n) {
            ans += that;
        }
    }
    ans += "it";
    cout << ans << "\n";
    return 0;
}
