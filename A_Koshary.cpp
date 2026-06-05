// Question Number : 2227A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a % 2 ==1 && b % 2 == 1){
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
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
