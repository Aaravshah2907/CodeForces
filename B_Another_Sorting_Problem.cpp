#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--){
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long k = 0;

        for (int i = 0; i + 1 < n; i++){
            k = max(k, a[i] - a[i + 1]);
        }

        bool ok = true;

        int cur = 0; // current xi

        for (int i = 0; i + 1 < n; i++){
            if (a[i] > a[i + 1]){
                // must be 0 -> 1
                if (cur == 1){
                    ok = false;
                    break;
                }
                cur = 1;
            } else {
                // can we do 1 -> 0 ?
                if (cur == 1 && a[i + 1] - a[i] >= k) {
                    cur = 0;
                }
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}