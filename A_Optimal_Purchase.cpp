// Question Number : 2230A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    unsigned long long n,a,b;
    cin >> n >> a >> b;
    unsigned long long ans = 0;
    if ((a > b/3) && (a*(n%3) < b)){
        //cout << "case 1: ";
        ans = n/3 * b + (n%3)*a;
    } else if ((a > b / 3) && (a * (n % 3) >= b)) {
        //cout << "case 2: ";
        ans = ceil(n/3.0)*b;
    } else if ((a <= b/3) && (a*(n%3) < b)){
        //cout << "case 3: ";
        ans = n*a;
    } else if ((a <= b / 3) && (a * (n % 3) >= b)) {
        //cout << "case 4: ";
        ans = ceil(n/3.0)*b;
    }
    cout << ans << "\n";
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
