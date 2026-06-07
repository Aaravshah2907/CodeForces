#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

constexpr int INF = 1e9;
constexpr ll LINF = 1e18;
constexpr char nl = '\n';

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

bool palindrome(long long x){
    string s = to_string(x);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

void solve(){
    unsigned long long n; cin >> n;
    
    if (n < 22){
        for (long long a = 0; a <= n; a++){
            if (palindrome(a) && (n - a) % 12 == 0){
                cout << a << ' ' << (n - a) << '\n';
                return;
            }
        }
        
        cout << -1 << '\n';
        return;
    }

    static long long pal[12] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 22, 11};

    long long a = pal[n % 12];
    cout << a << ' ' << (n - a) << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;

    while (T--)
        solve();

    return 0;
}