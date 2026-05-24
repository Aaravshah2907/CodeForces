// Question Number : 1294C

#include <bits/stdc++.h>
using namespace std;

void solve(){
    unsigned long long t;
    cin >> t;

    vector<unsigned long long> a = {};

    // We only need to check up to the square root of the remaining 't'
    for (unsigned long long i = 2; i * i <= t && a.size() < 2; i++){
        if (t % i == 0){
            a.push_back(i);
            t /= i;
        }
    }

    // If we couldn't find 2 distinct small factors, it's impossible
    if (a.size() < 2){
        cout << "NO\n";
        return;
    }

    // 't' now holds the remaining third factor.
    // It must be strictly greater than 1 and distinct from the first two.
    if (t == 1 || t == a[0] || t == a[1]){
        cout << "NO\n";
        return;
    }

    a.push_back(t); // The remaining factor is the third number
    cout << "YES\n" << a[0] << " " << a[1] << " " << a[2] << "\n";
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
