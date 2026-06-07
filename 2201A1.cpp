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

template <class T>
bool ckmin(T &a, const T &b){
    return b < a ? a = b, true : false;
}

template <class T>
bool ckmax(T &a, const T &b)
{
    return a < b ? a = b, true : false;
}

void solve(){
    int n;
    cin >> n;
    vll a(n);
    for (ll &x : a)
        cin >> x;

    vector<bool> added(n, false);
    int count_unique = 1;
    //cout << "Unique element: " << a[0] << " " << nl;
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i-1] == 1) {
            //cout << a[i] << " " << a[i-1] << " " << "Diff 1, added" << nl;
            added[i] = true;
        } else if (a[i] == a[i-1] && added[i-1]) {
            //cout << a[i] << " " << a[i-1] << " " << "Same as previous, added" << nl;
            added[i] = true;
        } else if (a[i] < a[i-1]){
            // We need to check in the previously added numbers in a row can this number be genreated?
            bool check = false;
            int last_index = i-1;
            for (; last_index>0 && added[last_index]; last_index--){
                if (a[last_index] == a[i] && added[last_index]){
                    check = true;
                    break;
                }
            }
            if (check){
                added[i] = true;
                //cout << "Possible from prev iter: " << a[i] << nl;
            } else {
                count_unique++;
                //cout << "Unique Element: " << a[i] << nl;
            }
        } else {
            count_unique++;
            //cout << "Unique element: " << a[i] << " " << nl;
        }
    }
    cout << count_unique << "\n";
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