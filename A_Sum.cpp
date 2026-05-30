// Question Number : 1742A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    if (a + b == c || a + c == b || b + c == a) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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

