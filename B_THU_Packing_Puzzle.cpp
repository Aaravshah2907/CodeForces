// Question Number : 2216B

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    unsigned long long t, h, u;
    cin >> t >> h >> u;
    unsigned long long total = 0, min_tu = 0, even_t = 0;
    if (t > u + 2*h){
        total = 2*u + 3*h + 2*t + 1;
    } else {
        total = 2*t + 3*(h+u) - min(t, u);
    }
    cout << total << "\n";
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
