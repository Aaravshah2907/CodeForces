// Question Number : 1409A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin >> a >> b;
    double result = (double)abs(a-b)/10.0;
    int ans = ceil(result);
    cout << ans << endl;
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
